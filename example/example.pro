######################################################################
# Automatically generated by qmake (2.01a) Wed 18. Jan 15:18:46 2012
######################################################################

TEMPLATE = app
TARGET = QHexViewExample
DEPENDPATH += $$OUT_PWD/../buildlib
INCLUDEPATH += $$OUT_PWD/../buildlib

# Input
SOURCES += main.cpp

CONFIG(debug, debug|release) {
    LIBS += -L$$OUT_PWD/../lib -lQHexViewd
} else {
    LIBS += -L$$OUT_PWD/../lib -lQHexView
}
