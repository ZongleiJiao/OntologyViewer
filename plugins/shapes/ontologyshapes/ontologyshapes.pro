QT           += xml svg
TEMPLATE      = lib
CONFIG       += qt plugin
TARGET        = $$qtLibraryTarget(shapes_basic)

include(../../../common_options.qmake)
include(../shape_plugin_options.pri)

SOURCES += \
    plugin.cpp \
    ontoclass.cpp \
    ontoindividual.cpp \
    ontoproperty.cpp

HEADERS += \
    ontoclass.h \
    ontoindividual.h \
    ontoproperty.h







