#include "measuringwindow.h"
#include "ui_measuringwindow.h"
#include <cv.h>
#include <highgui.h>
#include "camera.h"
#include <QMessageBox>
#include "linemarker.h"
#include "linemarkercontrols.h"
#include <QString>
#include <QClipboard>

LineMarker measurelinemarker;
lineSet workingSet;
Camera myCamera;

double result;

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
    workingSet = temporary;
}

void MeasuringWindow::setCamera(Camera thisCamera)
{
    myCamera = thisCamera;
}

void MeasuringWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->doubleSpinBox->setValue(double(value));
    workingSet.setDistance(double (value));
}

void MeasuringWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    ui->horizontalSlider->setValue(int(arg1));
    workingSet.setDistance(arg1);
}

void MeasuringWindow::on_pushButton_2_clicked()
{
    result = myCamera.calculate_RealHeight(workingSet.dc, workingSet);
    QString resultText = QString::number(result);
    ui->measuredValue->setText(resultText);
}

void MeasuringWindow::on_pushButton_3_clicked()
{
    QString str;
    QApplication::clipboard()->setText(str.number(result));
}

