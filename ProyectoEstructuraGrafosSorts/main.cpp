#include "mainproyectwindow.h"
#include "sorts.h"
#include "graph.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainProyectWindow w;
    Sorts w;
    //Graph w;
    w.show();

    return a.exec();
}
