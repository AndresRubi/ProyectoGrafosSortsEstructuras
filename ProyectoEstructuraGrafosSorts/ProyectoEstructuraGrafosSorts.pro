#-------------------------------------------------
#
# Project created by QtCreator 2015-06-17T10:27:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoEstructuraGrafosSorts
TEMPLATE = app


SOURCES += main.cpp\
        mainproyectwindow.cpp \
    sorts.cpp \
    bucketsort.cpp \
    bubblesort.cpp \
    heapsort.cpp \
    quicksort.cpp \
    mergesort.cpp

HEADERS  += mainproyectwindow.h \
    sorts.h \
    bucketsort.h \
    bubblesort.h \
    heapsort.h \
    quicksort.h \
    mergesort.h

FORMS    += mainproyectwindow.ui \
    sorts.ui
