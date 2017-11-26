#-------------------------------------------------
#
# Project created by QtCreator 2017-03-07T19:18:29
#

#-------------------------------------------------

QT += core gui
QT += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = KAWA-GCODE
TEMPLATE = app


SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/port.cpp \
    src/gparser.cpp \
    src/programrun.cpp \
    src/openfile.cpp

HEADERS  += include/mainwindow.h \
    include/port.h \
    include/gparser.h \
    include/programrun.h \
    include/openfile.h \
    include/ui_mainwindow.h

FORMS    += include/mainwindow.ui \
            include/error.ui


