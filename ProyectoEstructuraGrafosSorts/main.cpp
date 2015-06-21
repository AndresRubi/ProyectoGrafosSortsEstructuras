#include "mainproyectwindow.h"
#include "sorts.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainProyectWindow w;
    Sorts w;
    w.show();

    return a.exec();
}
