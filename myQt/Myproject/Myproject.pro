QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrator.cpp \
    dishes.cpp \
    dishwidget.cpp \
    logonwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    managerwindow.cpp \
    member.cpp \
    memberwindow.cpp

HEADERS += \
    administrator.h \
    dishes.h \
    dishwidget.h \
    logonwidget.h \
    mainwindow.h \
    managerwindow.h \
    member.h \
    memberwindow.h

FORMS += \
    dishwidget.ui \
    logonwidget.ui \
    mainwindow.ui \
    managerwindow.ui \
    memberwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc
