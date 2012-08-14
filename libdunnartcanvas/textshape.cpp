/*
 * Dunnart - Constraint-based Diagram Editor
 *
 * Copyright (C) 2003-2007  Michael Wybrow
 * Copyright (C) 2006-2008  Monash University
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, 
 * MA  02110-1301, USA.
 * 
 *
 * Author(s): Michael Wybrow  <http://michael.wybrow.info/>
*/

#include <cassert>
#include <utility>
#include <cstdlib>

#include "libavoid/libavoid.h"
using Avoid::Polygon;
using Avoid::Point;

#include "libdunnartcanvas/oldcanvas.h"
#include "libdunnartcanvas/shared.h"
#include "libdunnartcanvas/undo.h"
#include "libdunnartcanvas/visibility.h"
#include "libdunnartcanvas/textshape.h"
#include "libdunnartcanvas/placement.h"

namespace dunnart {

//===========================================================================
//  TextShape object code:


const unsigned int MAX_TEXTSHAPE_FONTSIZE = 200;

QFont *textShapeFont[MAX_TEXTSHAPE_FONTSIZE + 1] = { NULL };


TextShape::TextShape()
    :ShapeObj(x_shTextShape)
{
    _colour = Qt::black;
    txtStr = strdup("Text");
    //QT unicodeStr = SDLGui::UTF16_fromChar(txtStr);
    fontSize = 16;
}

TextShape::TextShape(const double x, const double y, const char *txt, int ptSize)
    :ShapeObj(x_shTextShape)
{
    CanvasItem::setPos(x, y);
    _colour = Qt::black;
    txtStr = NULL;
    //QT unicodeStr = SDLGui::UTF16_fromChar(txtStr);
    fontSize = ptSize;
    setPainterPath(buildPainterPath());
    setText(txt);
}


TextShape::TextShape(QString id, const double x, const double y,
        int w, int h, const char *txt, int ptSize)
    : ShapeObj(x_shTextShape)
{
    initWithDimensions(id, x, y, w, h);
    _colour = Qt::black;
    txtStr = NULL;
    //QT unicodeStr = SDLGui::UTF16_fromChar(txtStr);
    fontSize = ptSize;
    setPainterPath(buildPainterPath());
    setText(txt);
}

void TextShape::initWithXMLProperties(Canvas *canvas,
        const QDomElement& node, const QString& ns)
{
    // Call equivalent superclass method.
    ShapeObj::initWithXMLProperties(canvas, node, ns);

    //QT unicodeStr = SDLGui::UTF16_fromChar(txtStr);
    fontSize = essentialProp<int>(node, x_fontSize, ns);;
    setPainterPath(buildPainterPath());

    QString value = nodeAttribute(node, ns, x_label);
    if (!value.isNull())
    {
        setText(value);
    }
    routerAdd();
}


#if 0
// Get real text dimensions -- the textshape will completely contain the 
// rendered text but won't match its size.  This function can be used to
// get the true position and dimensions of the rendered text.
//
// The fifth argument, b, is the baseline of the text
void TextShape::getTextDimensions(int *x, int *y, int *w, int *h, int *b,
        int *yOff)
{
    if (textShapeFont[fontSize] == NULL)
    {
        textShapeFont[fontSize] = FONT_LoadTTF("FreeSans.ttf", fontSize);
    }
    assert(textShapeFont[fontSize] != NULL);

    int realH = 0;
    Uint16 *ch = unicodeStr;
    int overallMaxY = 0;
    while (*ch != '\0')
    {
        int minx, maxx, miny, maxy, advance;

        int err = TTF_GlyphMetrics(textShapeFont[fontSize], *ch, &minx,
                &maxx, &miny, &maxy, &advance);
        if (!err)
        {
            realH = std::max(realH, maxy - miny + 1);
            overallMaxY = std::max(overallMaxY, maxy);
        }
        else
        {
            printf("warning: TTF_GlyphMetrics returned an error\n");
        }
        ch++;
    }
    int ascent = TTF_FontAscent(textShapeFont[fontSize]);
    int realYOffset = ascent - overallMaxY;

    // Can't get width from the individual glyphs due to kerning issues, 
    // just call TTF_SizeUNICODE
    int textw, dummy;
    // Get text size:
    TTF_SizeUNICODE(textShapeFont[fontSize], unicodeStr, &textw, &dummy);

    if (x)  *x = xpos + cxoff;
    if (y)  *y = ypos + cyoff;
    if (w)  *w = textw;
    if (h)  *h = realH;
    if (b)  *b = ypos + overallMaxY + cxoff;

    if (yOff) *yOff = realYOffset;
}
#endif


void TextShape::setTextPosition(int x, int y, bool from_cider)
{
    bool store_undo = true;
    bool from_solver = false;
    move_to(x, y, store_undo, from_solver, from_cider);
}


void TextShape::setTextPositionByBaseline(int x, int b, bool from_cider)
{
    int ty = 0, tb = 0;
   //QT getTextDimensions(NULL, &ty, NULL, NULL, &tb);

    setTextPosition(x, b - (tb - ty), from_cider);
}


void TextShape::setColour(unsigned int r, unsigned int g, unsigned int b)
{
    _colour.setRed(std::min(r, (unsigned)255));
    _colour.setGreen(std::min(g, (unsigned)255));
    _colour.setBlue(std::min(b, (unsigned)255));

    //bool regen_cache = true;
    //QT set_active_image(get_active_image_n(), regen_cache);
    //QT display();
}


char *TextShape::getText(void)
{
    return txtStr;
}


void TextShape::setLabel(const QString& label)
{
    setText(label);
}


void TextShape::setText(const QString& t)
{
    Q_UNUSED (t)

#if 0
    assert(t != NULL);

    if ((t[0] == '=') && isdigit(t[1]))
    {
        unsigned int value = atoi(t + 1);
        if ((fontSize < 1) || (fontSize > MAX_TEXTSHAPE_FONTSIZE))
        {
            return;
        }
        fontSize = value;
    }
    else if ((t[0] == '=') && (t[1] == 'f') && isdigit(t[2]))
    {
        int fitw, fith;
        int numRead = sscanf(t, "=f%dx%d", &fitw, &fith);
        if (numRead == 2)
        {
            setSizeToFit(fitw, fith);
        }
    }
    else if ((t[0] == '=') && (t[1] == 'l') && isdigit(t[2]))
    {
        int fitw;
        int numRead = sscanf(t, "=l%d", &fitw);
        if (numRead == 1)
        {
            makeLine(fitw);
        }
    }
    else
    {
        if (txtStr)
        {
            std::free(txtStr);
        }
        txtStr = strdup(t);
        //QT unicodeStr = UTF16_fromChar(txtStr);
        setLabel(txtStr);
    }
    
    if (textShapeFont[fontSize] == NULL)
    {
        textShapeFont[fontSize] = FONT_LoadTTF("FreeSans.ttf", fontSize);
    }
    assert(textShapeFont[fontSize] != NULL);

    assert(fontSize > 0);
    assert(fontSize < MAX_TEXTSHAPE_FONTSIZE);

    int textw, texth, textx, texty;
    getTextDimensions(&textx, &texty, &textw, &texth, NULL, &baselineOffset);

    restore_behind();
    set_noimages(textw, texth);

    shapePoly = poly(selectionBuffer, shapePoly);

    bool regen_cache = true;
    set_active_image(get_active_image_n(), regen_cache);
    display();
#endif
}


#if 0
unsigned int TextShape::makeLine(const int width)
{
    setFontSize(28);
    char t[500];
    strcpy(t, "");
    int textw = 0;
    do {
        strcat(t, "&#8211;");
        if (txtStr)
        {
            std::free(txtStr);
        }
        txtStr = strdup(t);
        unicodeStr = SDLGui::UTF16_fromChar(txtStr);
        setLabel(txtStr);
    
        getTextDimensions(NULL, NULL, &textw, NULL, NULL);
    } while (textw < width);

    // Remove the last mdash:
    int len = strlen(t);
    t[len - 7] = '\0';
    setText(t);
    getTextDimensions(NULL, NULL, &textw, NULL, NULL);
    
    return textw;
}


const unsigned int TextShape::setSizeToFit(const int w, const int h)
{
    fontSize = h;
    int textw, texth;
    getTextDimensions(NULL, NULL, &textw, &texth, NULL);
//    printf("setSizeToFit(%d, %d):\n", w, h);
//    printf("\ttrying %dpt...\n", fontSize);
//    printf("\t%s\n", txtStr);
    while ((textw <= w) && (texth <= h))
    {
        fontSize++;
        getTextDimensions(NULL, NULL, &textw, &texth, NULL);
//        printf("\ttrying %dpt...\n", fontSize);
//        printf("\t\t(%d, %d)\n", textw, texth);
    }
    while ((textw > w) && (texth > h))
    {
        fontSize--;
        getTextDimensions(NULL, NULL, &textw, &texth, NULL);
//        printf("\ttrying %dpt...\n", fontSize);
//        printf("\t\t(%d, %d)\n", textw, texth);
    }
    setFontSize(fontSize);
//    printf("\tsetFontSize(%d)\n", fontSize);

    return fontSize;
}


void TextShape::setFontSize(const unsigned int ptSize)
{
    fontSize = ptSize;
    
    assert(fontSize > 0);
    assert(fontSize < MAX_TEXTSHAPE_FONTSIZE);

    if (textShapeFont[fontSize] == NULL)
    {
        textShapeFont[fontSize] = FONT_LoadTTF("FreeSans.ttf", fontSize);
    }
    assert(textShapeFont[fontSize] != NULL);

    int textw, texth, textx, texty;
    getTextDimensions(&textx, &texty, &textw, &texth, NULL, &baselineOffset);
    
    restore_behind();
    set_noimages(textw, texth);

    shapePoly = poly(selectionBuffer, shapePoly);

    bool regen_cache = true;
    set_active_image(get_active_image_n(), regen_cache);
    display();
}


const unsigned int TextShape::getFontSize(void)
{
    return fontSize;
}
#endif


QDomElement TextShape::to_QDomElement(const unsigned int subset, 
        QDomDocument& doc)
{
    QDomElement node = doc.createElement("dunnart:node");
    
    if (subset & XMLSS_IOTHER)
    {
        //newProp(node, x_label, txtStr);
        newProp(node, x_fontSize, fontSize);
    }

    addXmlProps(subset, node, doc);

    return node;
}


Polygon TextShape::polygon(void) const
{
    double sx = x();
    double sy = y();
    double sw = width(), sh = height();
    
    Avoid::Polygon poly(4);
    poly._id = (int) m_internal_id;

    poly.ps[0].x = sx + sw;
    poly.ps[0].y = sy;

    poly.ps[1].x = sx + sw;
    poly.ps[1].y = sy + sh;

    poly.ps[2].x = sx;
    poly.ps[2].y = sy + sh;

    poly.ps[3].x = sx;
    poly.ps[3].y = sy;

    return poly;
}


}
// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent

