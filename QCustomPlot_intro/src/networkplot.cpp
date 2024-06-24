#include "networkplot.h"
#include "ui_networkplot.h"

NetworkPlot::NetworkPlot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NetworkPlot)
{
    ui->setupUi(this);
    ui->widget->addGraph();
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->widget->xAxis->setLabel("X");
    ui->widget->xAxis->setRange(-5000,1000);
    ui->widget->yAxis->setLabel("Y");
    ui->widget->yAxis->setRange(1000,4000);

    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
/*
    QVector<double> x = {1,3,5,3,2},y = {2,8,16,2,1};
    ui->widget->graph(0)->setData(x,y);
    ui->widget->rescaleAxes();
    ui->widget->replot();
    ui->widget->update();
*/

}

NetworkPlot::~NetworkPlot()
{
    delete ui;
}

void NetworkPlot::on_btnPlot_clicked()
{
    QVector<double> x = {1,3,5,3,2},y = {2,8,16,2,1};
    ui->widget->graph(0)->setData(x,y);
    ui->widget->rescaleAxes();
    ui->widget->replot();
    ui->widget->update();
}


void NetworkPlot::on_btnClear_clicked()
{
    ui->widget->graph(0)->data()->clear();
    ui->widget->replot();
    ui->widget->update();
}

