QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
TEMPLATE = app
TARGET = bathingLake1_ma

SOURCES +=     controllerlake.cpp     launcheratandardtype.cpp     launcherluxurioustype.cpp     main.cpp     viewwidget1.cpp

HEADERS +=     controllerlake.h     launcheratandardtype.h     launcherluxurioustype.h     viewwidget1.h

FORMS +=     viewwidget1.ui
