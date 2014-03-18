#-------------------------------------------------
#
# Project created by QtCreator 2014-02-17T21:51:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CryptoChat
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    profile.cpp \
    settings.cpp \
    chat.cpp \
    changepass.cpp \
    changepicture.cpp \
    newcontact.cpp \
    about.cpp


HEADERS  += login.h \
    profile.h \
    settings.h \
    chat.h \
    changepass.h \
    changepicture.h \
    newcontact.h \
    about.h



FORMS    += login.ui \
    profile.ui \
    settings.ui \
    chat.ui \
    changepass.ui \
    changepicture.ui \
    newcontact.ui \
    about.ui
