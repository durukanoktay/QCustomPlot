#ifndef NETWORKPLOT_H
#define NETWORKPLOT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class NetworkPlot;
}
QT_END_NAMESPACE

class NetworkPlot : public QMainWindow
{
    Q_OBJECT

public:
    NetworkPlot(QWidget *parent = nullptr);
    ~NetworkPlot();

private slots:
    void on_btnPlot_clicked();

    void on_btnClear_clicked();

private:
    Ui::NetworkPlot *ui;
};
#endif // NETWORKPLOT_H
