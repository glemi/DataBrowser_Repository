#-------------------------------------------------
#
# Project created by QtCreator 2013-09-05T19:23:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataBrowser
TEMPLATE = app


SOURCES  += main.cpp\
            mainwindow.cpp \
            measurement.cpp \
            datasetmodel.cpp \
            datasetnode.cpp \
    component.cpp

HEADERS  += mainwindow.h \
	    measurement.h \
            datasetmodel.h \
            datasetnode.h \
    component.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-matioWrapper-Desktop_Qt_5_1_1_GCC_64bit-Debug/release/ -lmatioWrapper
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-matioWrapper-Desktop_Qt_5_1_1_GCC_64bit-Debug/debug/ -lmatioWrapper
else:unix: LIBS += -L$$PWD/../build-matioWrapper-Desktop_Qt_5_1_1_GCC_64bit-Debug/ -lmatioWrapper

INCLUDEPATH += $$PWD/../matioWrapper
DEPENDPATH += $$PWD/../matioWrapper
