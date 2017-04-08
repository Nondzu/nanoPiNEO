QT += core
QT -= gui

TARGET = tcp_server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    tcp_server/tcp_server.cpp \
    SerialPort/serial.cpp

HEADERS += \
    tcp_server/tcp_server.h \
    SerialPort/serial.h

