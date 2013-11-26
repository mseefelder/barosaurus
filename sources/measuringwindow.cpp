#include "measuringwindow.h"
#include "ui_measuringwindow.h"

MeasuringWindow::MeasuringWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MeasuringWindow)
{
    ui->setupUi(this);
}

MeasuringWindow::~MeasuringWindow()
{
    delete ui;
}
