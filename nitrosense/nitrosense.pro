#-------------------------------------------------
#
# Project created by QtCreator 2023-04-02T20:37:35
#
#-------------------------------------------------

QT       += core gui
QT       += charts


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nitrosense
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    keybroad.cpp \
    harmoni.cpp \
    notifiacation.cpp \
    setting.cpp \
    plot.cpp

HEADERS  += mainwindow.h \
    keybroad.h \
    harmoni.h \
    notifiacation.h \
    setting.h \
    plot.h

FORMS    += mainwindow.ui \
    keybroad.ui \
    harmoni.ui \
    notifiacation.ui \
    setting.ui \
    plot.ui
