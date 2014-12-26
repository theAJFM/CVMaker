#-------------------------------------------------
#
# Project created by QtCreator 2013-11-29T13:44:47
#
#-------------------------------------------------

QT += core gui webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DSAFinalProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    templating.cpp \
    basicinfo.cpp \
    education.cpp \
    skills.cpp \
    work.cpp \
    image.cpp

HEADERS  += mainwindow.h \
    templating.h \
    basicinfo.h \
    education.h \
    skills.h \
    work.h \
    image.h

FORMS    += mainwindow.ui \
    templating.ui \
    basicinfo.ui \
    education.ui \
    skills.ui \
    work.ui \
    image.ui

RESOURCES += \
    projectresource.qrc
