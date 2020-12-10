QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    evidence.cpp \
    evidence2.cpp \
    evidence3.cpp \
    help.cpp \
    howtoplay.cpp \
    main.cpp \
    mainwindow.cpp \
    scoreboard.cpp \
    stage1.cpp \
    stage2.cpp \
    stage3.cpp \
    stage4.cpp \
    welcome.cpp

HEADERS += \
    evidence.h \
    evidence2.h \
    evidence3.h \
    help.h \
    howtoplay.h \
    mainwindow.h \
    scoreboard.h \
    stage1.h \
    stage2.h \
    stage3.h \
    stage4.h \
    welcome.h

FORMS += \
    evidence.ui \
    evidence2.ui \
    evidence3.ui \
    help.ui \
    howtoplay.ui \
    mainwindow.ui \
    scoreboard.ui \
    stage1.ui \
    stage2.ui \
    stage3.ui \
    stage4.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    howto.qrc \
    img10.qrc \
    img3.qrc \
    img4.qrc \
    img5.qrc \
    img7.qrc \
    img8.qrc \
    img9.qrc \
    imge6.qrc \
    resourceself.qrc \
    smile.qrc
