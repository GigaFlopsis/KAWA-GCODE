#-------------------------------------------------
#
# Project created by QtCreator 2017-03-07T19:18:29
#

#-------------------------------------------------

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = KAWA-GCODE
TEMPLATE = app


SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/gparser.cpp \
    src/programrun.cpp

HEADERS  += include/mainwindow.h \
    include/gparser.h \
    include/programrun.h

FORMS    += include/mainwindow.ui


