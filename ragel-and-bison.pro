#-------------------------------------------------
#
# Project created by QtCreator 2014-01-16T20:44:18
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ragel-and-bison
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


include(../../../ragel.pri)
include(../../../bison.pri)

RAGEL_SOURCES = src/lexer.rl
BISON_SOURCES = src/parser.y

SOURCES += \
    src/main.cpp

OTHER_FILES += \
    $$RAGEL_SOURCES \
    $$BISON_SOURCES

HEADERS += \
    src/lexer.h
