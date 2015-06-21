#include "sorts.h"
#include "ui_sorts.h"

Sorts::Sorts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sorts)
{
    Cant=0;
    ui->setupUi(this);

    timer.start();
    cout << "The slow operation took" << timer.elapsed() << "milliseconds"<<endl;
    Cant=timer.elapsed();
   /*
    Cantidad=ui->spinBoxCantidad->text();
    arr=new int[Cantidad.toInt()];
    arr_Bubble=new int[Cantidad.toInt()];
    arr_Bucket=new int[Cantidad.toInt()];
    arr_Heap=new int[Cantidad.toInt()];
    arr_Quick=new int[Cantidad.toInt()];
    arr_Merge=new int[Cantidad.toInt()];
    */
}

Sorts::~Sorts()
{
    delete ui;
}

void Sorts::SortFunction(int Quantity)
{
    /*arr[Quantity];
    arr_Bubble[Quantity];
    arr_Bucket[Quantity];
    arr_Heap[Quantity];

    for(int x=0;x<Quantity;x++)
    {
        int v2 = rand() % 100  + 1;
        arr[x]=v2;
        arr_Bubble[x]=v2;
        arr_Bucket[x]=v2;
        arr_Heap[x]=v2;

    }

    bubble.FunctionBubbleSort(arr_Bubble,Quantity);
    bucket.Bucket_Sort(arr_Bucket,Quantity);
    heap.Build_MaxHeap(arr_Heap,Quantity);
    heap.Function_HeapSort(arr_Heap,Quantity);*/

}

void Sorts::on_pushButtonBubbleSort_clicked()
{
    tBubble.start();
    bubble.FunctionBubbleSort(arr_Bubble,Cantidad.toInt());
    for(int x=0;x<Cantidad.toInt();x++)
    {
        QString NumText= QString::number(arr_Bubble[x]);
        ui->listWidgetBubble->addItem(NumText);
    }
    QString lcdNum;
    lcdNum=QString::number(tBubble.elapsed());
    ui->lcdNumberBubbleSort->display(lcdNum);
}

void Sorts::on_pushLoadArray_clicked()
{
    Cantidad=ui->spinBoxCantidad->text();
    arr=new int[Cantidad.toInt()];
    arr_Bubble=new int[Cantidad.toInt()];
    arr_Bucket=new int[Cantidad.toInt()];
    arr_Heap=new int[Cantidad.toInt()];
    arr_Quick=new int[Cantidad.toInt()];
    arr_Merge=new int[Cantidad.toInt()];

    cout<<Cantidad.toInt()<<"cantidad"<<endl;
    for(int x=0;x<Cantidad.toInt();x++)
    {
        int v2 = rand() % 100  + 1;
        arr[x]=v2;
        arr_Bubble[x]=v2;
        arr_Bucket[x]=v2;
        arr_Heap[x]=v2;
        arr_Quick[x]=v2;
        arr_Merge[x]=v2;

        QString NumText= QString::number(v2);
        ui->listWidgetArrays->addItem(NumText);

    }
}

void Sorts::on_pushButton_clicked()
{
    tBucket.start();
    bucket.Bucket_Sort(arr_Bucket,Cantidad.toInt());
    for(int x=0;x<Cantidad.toInt();x++)
    {
        QString NumText= QString::number(arr_Bucket[x]);
        ui->listWidgetBucket->addItem(NumText);
    }
    QString lcdNum;
    lcdNum=QString::number(tBucket.elapsed());
    ui->lcdNumberBucketSort->display(lcdNum);
}

void Sorts::on_pushButtonHeap_clicked()
{
    tHeap.start();
    heap.Build_MaxHeap(arr_Heap,Cantidad.toInt());
    heap.Function_HeapSort(arr_Heap,Cantidad.toInt());
    for(int x=0;x<Cantidad.toInt();x++)
    {
        QString NumText= QString::number(arr_Heap[x]);
        ui->listWidgetHeap->addItem(NumText);
    }
    QString lcdNum;
    lcdNum=QString::number(tHeap.elapsed());
    ui->lcdNumberHeapSort->display(lcdNum);
}

void Sorts::on_pushButtonQuick_clicked()
{
    tQuick.start();
    quick.quick_sort(arr_Quick,0,Cantidad.toInt()-1);
    for(int x=0;x<Cantidad.toInt();x++)
    {
        QString NumText= QString::number(arr_Quick[x]);
        ui->listWidgetQuick->addItem(NumText);
    }
    QString lcdNum;
    lcdNum=QString::number(tQuick.elapsed());
    ui->lcdNumberQuickSort->display(lcdNum);
}

void Sorts::on_pushButtonMerge_clicked()
{
    tMerge.start();
    merge.merge_sort2(arr_Merge,0,Cantidad.toInt()-1);
    for(int x=0;x<Cantidad.toInt();x++)
    {
        QString NumText= QString::number(arr_Merge[x]);
        ui->listWidgetMerge->addItem(NumText);
    }
    QString lcdNum;
    lcdNum=QString::number(tMerge.elapsed());
    ui->lcdNumberMergeSort->display(lcdNum);
}

void Sorts::on_pushButtonRun_clicked()
{
    ui->pushButtonBubbleSort->clicked();
    ui->pushButtonHeap->clicked();
    ui->pushButton->clicked();
    ui->pushButtonMerge->clicked();
    ui->pushButtonQuick->clicked();
}
