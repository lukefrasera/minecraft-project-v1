#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // We cannot use w.showFullscreen() here because on Linux that creates the
    // window behind all other windows, so we have to set it to fullscreen after
    // it has been shown.
    w.show();
    w.setWindowState(w.windowState() | Qt::WindowFullScreen);

    return a.exec();
}

