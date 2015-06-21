#ifndef MAINPROYECTWINDOW_H
#define MAINPROYECTWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainProyectWindow;
}

class MainProyectWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainProyectWindow(QWidget *parent = 0);
    ~MainProyectWindow();

private:
    Ui::MainProyectWindow *ui;
};

#endif // MAINPROYECTWINDOW_H
