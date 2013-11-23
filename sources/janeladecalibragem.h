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

    void on_heightBox_valueChanged(double arg1);

    void on_horizontalSlider_1_valueChanged(int value);

    void on_spinBox_1_valueChanged(double arg1);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_spinBox_2_valueChanged(double arg1);

    void on_horizontalSlider_3_valueChanged(int value);



    void on_spinBox_3_valueChanged(double arg1);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_spinBox_4_valueChanged(double arg1);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_spinBox_5_valueChanged(double arg1);

private:
    Ui::JaneladeCalibragem *ui;
};

#endif // JANELADECALIBRAGEM_H
