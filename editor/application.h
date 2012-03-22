// vim: filetype=cpp ts=4 sw=4 et tw=0 wm=0 cindent
/*
 * Dunnart - Constraint-based Diagram Editor
 *
 * Copyright (C) 2011  Monash University
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
 * Author: Michael Wybrow <mjwybrow@users.sourceforge.net>
*/



#ifndef APPLICATION_H
#define APPLICATION_H

#include "libdunnartcanvas/canvasapplication.h"

class QEvent;

namespace dunnart {

class MainWindow;

class Application : public CanvasApplication
{
    public:
        Application(int & argc, char ** argv);
        MainWindow *mainWindow(void) const;
        virtual bool openDiagram(const QFileInfo& file);
    protected:
        bool event(QEvent *ev);
};

}
#endif // APPLICATION_H
