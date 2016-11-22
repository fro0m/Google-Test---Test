
include(../gtest_dependency.pri)
SRC_DIR = ../../../src

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt


HEADERS +=     tst_isvalueok.h \
               $$SRC_DIR/qcat.h

SOURCES +=     main.cpp \
               $$SRC_DIR/qcat.cpp


# added this in order to be able to include "qcat.h"
INCLUDEPATH += $$SRC_DIR
