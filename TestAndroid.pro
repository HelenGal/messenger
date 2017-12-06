#-------------------------------------------------
#
# Project created by QtCreator 2017-11-03T14:09:46
#
#-------------------------------------------------
QT       += sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestAndroid
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    registration.cpp \
    dbmanager.cpp

HEADERS  += mainwindow.h \
    login.h \
    registration.h \
    dbmanager.h

FORMS    += mainwindow.ui \
    login.ui \
    registration.ui

CONFIG += mobility
MOBILITY = 

