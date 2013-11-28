#include "measuringwindow.h"
#include "ui_measuringwindow.h"
#include <cv.h>
#include <highgui.h>
#include "camera.h"
#include <QMessageBox>
#include "linemarker.h"
#include "linemarkercontrols.h"

LineMarker measurelinemarker;

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

void MeasuringWindow::setLineMarker(LineMarker mytarget){
    measurelinemarker = mytarget;
}

void MeasuringWindow::on_pushButton_clicked()
{
    lineSet temporary = measurelinemarker.displayCamera("Photo of measuring target");
}
