#ifndef JANELADECALIBRAGEM_H
#define JANELADECALIBRAGEM_H

#include <QWidget>


namespace Ui {
class JaneladeCalibragem;
}

class JaneladeCalibragem : public QWidget
{
    Q_OBJECT

public:
    explicit JaneladeCalibragem(QWidget *parent = 0);
    ~JaneladeCalibragem();

private slots:




    void on_heightSlider_valueChanged(int value);

private:
    Ui::JaneladeCalibragem *ui;
};

#endif // JANELADECALIBRAGEM_H
