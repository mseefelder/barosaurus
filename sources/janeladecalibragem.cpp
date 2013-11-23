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







