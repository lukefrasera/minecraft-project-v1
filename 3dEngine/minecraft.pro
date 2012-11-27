QT += core gui opengl

TARGET = minecraft
TEMPLATE = app

# If you add your own folders, add them to INCLUDEPATH and DEPENDPATH, e.g.
# INCLUDEPATH += folder1 folder2
# DEPENDPATH += folder1 folder2

SOURCES += main.cpp \
    mainwindow.cpp \
    view.cpp

HEADERS += mainwindow.h \
    view.h \
    vector.h

FORMS += mainwindow.ui
