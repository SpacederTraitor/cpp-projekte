TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        consoleview.cpp \
        main.cpp \
        order.cpp \
        ordercontroller.cpp \
        orderlist.cpp

HEADERS += \
    consoleview.h \
    order.h \
    ordercontroller.h \
    orderlist.h
