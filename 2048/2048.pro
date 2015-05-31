#-------------------------------------------------
#
# Project created by QtCreator 2015-05-24T16:45:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
        gamewindow.cpp \
    square.cpp \
    menuwindow.cpp \
    winwindow.cpp \
    losewindow.cpp \
    chartswindow.cpp

HEADERS  += gamewindow.h \
    square.h \
    menuwindow.h \
    winwindow.h \
    losewindow.h \
    chartswindow.h

FORMS    += gamewindow.ui \
    menuwindow.ui \
    winwindow.ui \
    losewindow.ui \
    chartswindow.ui

RESOURCES += \
    res.qrc

SUBDIRS += \
    ../TicTacToe/TicTacToe.pro
