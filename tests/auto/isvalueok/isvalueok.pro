
include(../gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt

HEADERS +=     tst_isvalueok.h

SOURCES +=     main.cpp

# added this in order to be able to include "cat.h"
INCLUDEPATH += ../../../src
