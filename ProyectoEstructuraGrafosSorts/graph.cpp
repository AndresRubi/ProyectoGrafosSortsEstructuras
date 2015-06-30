#include "graph.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);

    pix = new QPixmap(600,600);
    scene = new QGraphicsScene();
    QGraphicsPixmapItem* item(scene->addPixmap(*pix)); // Save the returned item
    paint = new QPainter(pix);
    paint->setPen(*(new QColor(255,34,255,255)));

    /*pixErase = new QPixmap(600,600);
    paintErase = new QPainter(pix);
    paintErase->setPen(*(new QColor(255,34,255,255)));*/


    item->setPixmap(*pix);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();








   ordenamiento =false;
   PositionX=0;
   PositionY=0;
   count=0;
   county=100;
}

Graph::~Graph()
{
    delete ui;
}


void Graph::insert(string id)
{

    if(ordenamiento)
    {
        int x=count*100;
        int y=county;
        paint->drawRect(x,y,50,50);
        vertices.push_back(new Vertex(id,x,y));
        ordenamiento=false;
        count=count+1;
        cout<<"Coordenadas rect "<<x<<y<<endl;
        if(count==5)
        {
            county=county+200;
            count=0;
        }
    }
    else
    {
        int x=count*100;
        int y=county-100;
        paint->drawRect(x,y,50,50);
        vertices.push_back(new Vertex(id,count*100,county-100));
        ordenamiento=true;
        count=count+1;
        cout<<"Coordenadas rect "<<x<<y<<endl;
        if(count==5)
        {
            county=county+200;
            count=0;
        }
    }
    QGraphicsPixmapItem* item(scene->addPixmap(*pix)); // Save the returned item
    item->setPixmap(*pix);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}

void Graph::printGraph()
{
    for (int i = 0; i < vertices.size(); i++)
        vertices[i]->printEdges();
}

void Graph::Eliminator(string nameNode)
{

    for (int i = 0; i < vertices.size(); i++)
    {
        vertices[i]->EliminateEdge(nameNode);

    }
    for (int i = 0; i < vertices.size(); i++)
    {

        if(vertices[i]->getName()==nameNode)
        {
            vertices.erase(vertices.begin()+i);
            cout<<"no existasasasasasasastion"<<endl;
        }
        else
            cout<<"no existation"<<endl;
    }
}

void Graph::Agreganator(string Origen,string Destino,int peso)
{
    for(int x=0; x<vertices.size(); x++)
    {
        if(vertices[x]->getName()==Origen)
        {
            cout<<"si tenia el origen"<<endl;

            for(int y=0;y<vertices.size();y++)
            {
                if(vertices[y]->getName()==Destino)
                {
                    paint->drawLine(vertices[x]->PosX,vertices[x]->PosY,vertices[y]->PosX,vertices[y]->PosY);
                    cout<<"si tenia el destino"<<endl;
                    cout<<"coordenadas origen"<<vertices[x]->PosX<<vertices[x]->PosY <<"Coordenadas destino"<<vertices[y]->PosX<<vertices[y]->PosY<<endl;
                    vertices[x]->addEdge(vertices[y],peso);

                }

            }
        }

    }
    QGraphicsPixmapItem* item(scene->addPixmap(*pix)); // Save the returned item
    item->setPixmap(*pix);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}



void Graph::on_pushButtonCrearVertice_clicked()
{
    QString texto=ui->lineEditCrearVertice->text();
    insert(texto.toStdString());
}

void Graph::on_pushButtonCrearArista_clicked()
{
    QString Ori= ui->lineEditOrigenArista->text();
    QString Des= ui->lineEditDestinoArista->text();\
    QString Pes= ui->lineEditPeso->text();
    Agreganator(Ori.toStdString(),Des.toStdString(),Pes.toInt());
}

void Graph::on_pushButtonEliminarArista_clicked()
{
    QString Ori= ui->lineEditOrigenArista->text();
    QString Des= ui->lineEditDestinoArista->text();\

    for(int x=0; x<vertices.size();x++)
    {
        if(vertices[x]->getName()==Ori.toStdString())
        {
         /* for(int y=0; y<vertices.size();x++)
            {
                /*if(vertices[y]->getName()==Des.toStdString())
                {

                    paintErase->drawLine(vertices[x]->PosX,vertices[x]->PosY,vertices[y]->PosX,vertices[y]->PosY);
                }
            }*/
            vertices[x]->EliminateEdge(Des.toStdString());
        }
    }
    /*QGraphicsPixmapItem* item(scene->addPixmap(*pix)); // Save the returned item
    item->setPixmap(*pix);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
    */
}



void Graph::on_pushButtonEliminarVertice_clicked()
{
    QString vert=ui->lineEditEliminarVertice->text();
    Eliminator(vert.toStdString());
    printGraph();
}
