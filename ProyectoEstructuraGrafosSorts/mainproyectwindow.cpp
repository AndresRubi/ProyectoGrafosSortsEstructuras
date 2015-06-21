#include "mainproyectwindow.h"
#include "ui_mainproyectwindow.h"

MainProyectWindow::MainProyectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProyectWindow)
{
    ui->setupUi(this);
}

MainProyectWindow::~MainProyectWindow()
{
    delete ui;
}
