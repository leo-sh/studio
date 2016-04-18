#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T16:03:57
#
#-------------------------------------------------

QT       -= gui
QT       += core

TARGET = owproject
TEMPLATE = lib

DEFINES += OWPROJECT_LIBRARY

SOURCES += owproject.cpp \
    owroute.cpp \
    owcontroller.cpp \
    owaction.cpp \
    owview.cpp \
    owlayout.cpp \
    owform.cpp \
    owevent.cpp \
    oweventhandler.cpp \
    owclass.cpp \
    author.cpp \
    license.cpp

HEADERS += owproject.h\
        owproject_global.h \
    owroute.h \
    owcontroller.h \
    owaction.h \
    owview.h \
    owlayout.h \
    owform.h \
    owevent.h \
    oweventhandler.h \
    owclass.h \
    author.h \
    license.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
