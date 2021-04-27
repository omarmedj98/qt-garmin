QT       += core gui svg

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    LayoutSquare.cpp \
    WidgetNAV.cpp \
    WidgetPFD.cpp \
    main.cpp \
    mainwindow.cpp \
    qfi_NAV.cpp \
    qfi_PFD.cpp

HEADERS += \
    LayoutSquare.h \
    WidgetNAV.h \
    WidgetPFD.h \
    mainwindow.h \
    qfi_NAV.h \
    qfi_PFD.h

FORMS += \
    WidgetNAV.ui \
    WidgetPFD.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /home/pi/$${TARGET}
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qfi.qrc
