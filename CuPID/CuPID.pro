#-------------------------------------------------
#
# Project created by QtCreator 2015-10-01T17:07:00
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CuPID
TEMPLATE = app


SOURCES +=\
    project.cpp \
    login.cpp \
    main.cpp \
    projectmanage.cpp \
    stuprofile.cpp

HEADERS  += \
    project.h \
    login.h \
    projectmanage.h \
    Constant.h \
    stuprofile.h

FORMS    += \
    login.ui \
    projectmanage.ui \
    project.ui \
    stuprofile.ui
