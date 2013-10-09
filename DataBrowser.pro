#-------------------------------------------------
#
# Project created by QtCreator 2013-09-05T19:23:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataBrowser
TEMPLATE = app

CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++0x


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

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/matiowrapper-build -lmatioWrapper
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/matiowrapper-build -lmatioWrapper
else:unix: LIBS += -L$$PWD/matiowrapper-build -lmatioWrapper

INCLUDEPATH += $$PWD/../MatioWrapper \
                $$PWD/../matio-1.5.2/src

DEPENDPATH += $$PWD/../MatioWrapper \
                $$PWD/../matio-1.5.2/src

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../matio-1.5.2/src/.libs/release/ -lmatio
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../matio-1.5.2/src/.libs/debug/ -lmatio
else:symbian: LIBS += -lmatio
else:unix: LIBS += -L$$PWD/../matio-1.5.2/src/.libs/ -lmatio

INCLUDEPATH += $$PWD/../matio-1.5.2/src
DEPENDPATH += $$PWD/../matio-1.5.2/src

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../matio-1.5.2/src/.libs/release/matio.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../matio-1.5.2/src/.libs/debug/matio.lib
else:unix:!symbian: PRE_TARGETDEPS += $$PWD/../matio-1.5.2/src/.libs/libmatio.a
