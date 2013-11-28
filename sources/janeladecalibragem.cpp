#include "janeladecalibragem.h"
#include "ui_janeladecalibragem.h"
#include "measuringwindow.h"
#include <cv.h>
#include <highgui.h>
#include "camera.h"
#include <QMessageBox>
#include "linemarker.h"
#include "linemarkercontrols.h"

using namespace std;
using namespace cv;

fiveLineSets calibSet;
LineMarker linemarker;

JaneladeCalibragem::JaneladeCalibragem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JaneladeCalibragem)
{
    ui->setupUi(this);
}

JaneladeCalibragem::~JaneladeCalibragem()
{
    delete ui;
}

//-----------VALUE INPUTS----------------------------------------------------------
void JaneladeCalibragem::on_heightSlider_valueChanged(int value)
{
    ui->heightBox->setValue(double(value));
    calibSet.setObjectHeight(float(value));
}

void JaneladeCalibragem::on_heightBox_valueChanged(double arg1)
{
    ui->heightSlider->setValue(int(arg1));
    calibSet.setObjectHeight(arg1);

}

void JaneladeCalibragem::on_horizontalSlider_1_valueChanged(int value)
{
    ui->spinBox_1->setValue(double(value));
    calibSet.fset[0].setDistance(double(value));
}

void JaneladeCalibragem::on_spinBox_1_valueChanged(double arg1)
{
    ui->horizontalSlider_1->setValue(int(arg1));
    calibSet.fset[0].setDistance(arg1);
}

void JaneladeCalibragem::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(double(value));
    calibSet.fset[1].setDistance(double(value));
}

void JaneladeCalibragem::on_spinBox_2_valueChanged(double arg1)
{
    ui->horizontalSlider_2->setValue(int(arg1));
    calibSet.fset[1].setDistance(arg1);
}

void JaneladeCalibragem::on_horizontalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(double(value));
    calibSet.fset[2].setDistance(double(value));
}

void JaneladeCalibragem::on_spinBox_3_valueChanged(double arg1)
{
    ui->horizontalSlider_3->setValue(int(arg1));
    calibSet.fset[2].setDistance(arg1);
}

void JaneladeCalibragem::on_horizontalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(double(value));
    calibSet.fset[3].setDistance(double(value));
}

void JaneladeCalibragem::on_spinBox_4_valueChanged(double arg1)
{
    ui->horizontalSlider_4->setValue(int(arg1));
    calibSet.fset[3].setDistance(arg1);
}

void JaneladeCalibragem::on_horizontalSlider_5_valueChanged(int value)
{
    ui->spinBox_5->setValue(double(value));
    calibSet.fset[4].setDistance(double(value));
}

void JaneladeCalibragem::on_spinBox_5_valueChanged(double arg1)
{
    ui->horizontalSlider_5->setValue(int(arg1));
    calibSet.fset[4].setDistance(arg1);
}


//-----------CALIBRATION PHOTOS----------------------------------------------------------
void JaneladeCalibragem::on_pushButton_2_clicked()
{
    lineMarkerControls  *controlBox= new lineMarkerControls;
    controlBox->setTarget(&linemarker);
    controlBox->show();
    lineSet temporary = linemarker.displayCamera("Calibration photo 1");
    calibSet.setSet(0, temporary);
}

void JaneladeCalibragem::on_pushButton_3_clicked()
{
    lineSet temporary = linemarker.displayCamera("Calibration photo 2");
    calibSet.setSet(1, temporary);
}

void JaneladeCalibragem::on_pushButton_5_clicked()
{
    lineSet temporary = linemarker.displayCamera("Calibration photo 3");
    calibSet.setSet(2, temporary);
}

void JaneladeCalibragem::on_pushButton_4_clicked()
{
    lineSet temporary = linemarker.displayCamera("Calibration photo 4");
    calibSet.setSet(3, temporary);
}

void JaneladeCalibragem::on_pushButton_6_clicked()
{
    lineSet temporary = linemarker.displayCamera("Calibration photo 5");
    calibSet.setSet(4, temporary);
}

//-----------END OF CALIBRATION PROCESS----------------------------------------------------------
void JaneladeCalibragem::on_pushButton_clicked()
{
    if(calibSet.isFull()){
        MeasuringWindow  *measuringwindow= new MeasuringWindow;
        measuringwindow->show();
        this->close();
    }
    else if(!calibSet.isFull()){
        QMessageBox msgBox;
        msgBox.setText("You didn't take all the pictures, set all the values!");
        msgBox.exec();
    }
}
