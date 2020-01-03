#-------------------------------------------------
#
# Project created by QtCreator 2020-01-03T15:08:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fair_share
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    file_download.cpp

HEADERS  += mainwindow.h \
    file_download.h

FORMS    += mainwindow.ui \
    file_download.ui
