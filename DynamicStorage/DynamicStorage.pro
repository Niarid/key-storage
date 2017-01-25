QT += core
QT -= gui

CONFIG += c++11

TARGET = DynamicStorage
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    dynamic_storage.cpp \
    string_key.cpp \
    byte_array_value.cpp

HEADERS += \
    interface.h \
    dynamic_storage.h \
    string_key.h \
    byte_array_value.h
