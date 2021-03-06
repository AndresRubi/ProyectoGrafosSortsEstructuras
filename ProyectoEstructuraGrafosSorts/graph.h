#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <iostream>
#include <string>

using namespace std;
#include "vertex.h"



#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QPainter>
#include <vector>
#include <iostream>
#include <string>

#include <QWidget>

namespace Ui {
class Graph;
}

class Graph : public QWidget
{
    Q_OBJECT

public:
    explicit Graph(QWidget *parent = 0);
    ~Graph();
    void insert(string id);
    void printGraph();
    void Eliminator(string nameNode);
    void Agreganator(string Origen,string Destino,int peso);

    bool ordenamiento;
    int PositionX,PositionY;
    QGraphicsScene *scene;
    QPixmap *pix;
    QPainter *paint;

    QPixmap *pixErase;
    QPainter *paintErase;

    int count;
    int county;
    //void Pintador(int inicioX,int desti);


private slots:

    void on_pushButtonCrearVertice_clicked();

    void on_pushButtonCrearArista_clicked();

    void on_pushButtonEliminarArista_clicked();

    void on_pushButtonEliminarVertice_clicked();

private:
    Ui::Graph *ui;
    vector<Vertex*> vertices;


};

#endif // GRAPH_H
