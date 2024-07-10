QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountclass.cpp \
    addpost.cpp \
    captchacheck.cpp \
    contentclass.cpp \
    dirctmessageclass.cpp \
    home.cpp \
    jobclass.cpp \
    jobspage.cpp \
    main.cpp \
    mainwindow.cpp \
    mepage.cpp \
    messagingpage.cpp \
    mynetworkpage.cpp \
    page2.cpp \
    personalinfo.cpp \
    postclass.cpp \
    pv.cpp \
    verifycode.cpp

HEADERS += \
    accountclass.h \
    addpost.h \
    captchacheck.h \
    contentclass.h \
    dirctmessageclass.h \
    home.h \
    jobclass.h \
    jobspage.h \
    mainwindow.h \
    mepage.h \
    messagingpage.h \
    mynetworkpage.h \
    page2.h \
    personalinfo.h \
    postclass.h \
    pv.h \
    verifycode.h

FORMS += \
    addpost.ui \
    captchacheck.ui \
    home.ui \
    jobspage.ui \
    mainwindow.ui \
    mepage.ui \
    messagingpage.ui \
    mynetworkpage.ui \
    page2.ui \
    personalinfo.ui \
    pv.ui \
    verifycode.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    profimg.qrc
