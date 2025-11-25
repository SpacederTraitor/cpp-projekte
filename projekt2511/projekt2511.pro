TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        order.cpp \
        ordercontroller.cpp \
        orderlist.cpp \
        ordernode.cpp

HEADERS += \
    order.h \
    ordercontroller.h \
    orderlist.h \
    ordernode.h
