QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calendarParse.cpp \
    emailDP.cpp \
    main.cpp \
    mainwindow.cpp \
    newsDP2.cpp \
    recommendedOutfit.cpp \
    weatherDP.cpp

HEADERS += \
    calendarParse.h \
    emailDP.h \
    mainwindow.h \
    newsDP2.h \
    recommendedOutfit.h \
    weatherDP.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Res/calendarOut.txt \
    Res/cloudy.gif \
    Res/email_info_0.txt \
    Res/email_info_1.txt \
    Res/email_info_2.txt \
    Res/email_info_3.txt \
    Res/list_of_emails.txt \
    Res/newsoutput.txt \
    Res/outfitRecommendation/.DS_Store \
    Res/outfitRecommendation/rain/.DS_Store \
    Res/outfitRecommendation/rain/over10/athletic.jpg \
    Res/outfitRecommendation/rain/over10/casual.jpg \
    Res/outfitRecommendation/rain/over10/formal.jpg \
    Res/outfitRecommendation/rain/under10/athletic.jpg \
    Res/outfitRecommendation/rain/under10/casual.jpg \
    Res/outfitRecommendation/rain/under10/formal.jpg \
    Res/outfitRecommendation/snow/.DS_Store \
    Res/outfitRecommendation/snow/over10/.DS_Store \
    Res/outfitRecommendation/snow/over10/athletic.jpg \
    Res/outfitRecommendation/snow/over10/casual.jpg \
    Res/outfitRecommendation/snow/over10/formal.jpg \
    Res/outfitRecommendation/snow/under0/.DS_Store \
    Res/outfitRecommendation/snow/under0/athletic.jpg \
    Res/outfitRecommendation/snow/under0/casual.jpg \
    Res/outfitRecommendation/snow/under0/casual.psd \
    Res/outfitRecommendation/snow/under0/formal.jpg \
    Res/outfitRecommendation/snow/under10/.DS_Store \
    Res/outfitRecommendation/snow/under10/athletic.jpg \
    Res/outfitRecommendation/snow/under10/casual.jpg \
    Res/outfitRecommendation/snow/under10/formal.jpg \
    Res/outfitRecommendation/sun/.DS_Store \
    Res/outfitRecommendation/sun/over10/athletic.jpg \
    Res/outfitRecommendation/sun/over10/casual.jpg \
    Res/outfitRecommendation/sun/over10/formal.jpg \
    Res/outfitRecommendation/sun/under0/athletic.jpg \
    Res/outfitRecommendation/sun/under0/casual.jpg \
    Res/outfitRecommendation/sun/under0/formal.jpg \
    Res/outfitRecommendation/sun/under10/athletic.jpg \
    Res/outfitRecommendation/sun/under10/casual.jpg \
    Res/outfitRecommendation/sun/under10/formal.jpg \
    Res/rain.gif \
    Res/snow.gif \
    Res/sunny.gif \
    Res/sunny.png \
    Res/thunderstorm.gif \
    Res/weatheroutput.txt
