#include "graph.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);
}

Graph::~Graph()
{
    delete ui;
}


void Graph::insert(string id)
{
    vertices.push_back(new Vertex(id));

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
                    cout<<"si tenia el destino"<<endl;
                    vertices[x]->addEdge(vertices[y],peso);
                }

            }
        }

    }
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
            vertices[x]->EliminateEdge(Des.toStdString());
        }
    }
}



void Graph::on_pushButtonEliminarVertice_clicked()
{
    QString vert=ui->lineEditEliminarVertice->text();
    Eliminator(vert.toStdString());
    printGraph();
}
