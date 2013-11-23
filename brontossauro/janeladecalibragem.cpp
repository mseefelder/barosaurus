#include "janeladecalibragem.h"
#include "ui_janeladecalibragem.h"

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








void JaneladeCalibragem::on_heightSlider_valueChanged(int value)
{
    ui ->heightBox->setValue(double(value));
}

void JaneladeCalibragem::on_heightBox_valueChanged(double arg1)
{
    ui->heightSlider->setValue(int(arg1));
}
