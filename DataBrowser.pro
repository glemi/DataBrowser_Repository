#-------------------------------------------------
#
# Project created by QtCreator 2013-08-26T21:00:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataBrowser
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    datasetmodel.cpp

HEADERS  += mainwindow.h \
    datasetmodel.h

FORMS    += mainwindow.ui
