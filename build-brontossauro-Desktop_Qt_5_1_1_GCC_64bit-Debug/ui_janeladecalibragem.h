/********************************************************************************
** Form generated from reading UI file 'janeladecalibragem.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELADECALIBRAGEM_H
#define UI_JANELADECALIBRAGEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JaneladeCalibragem
{
public:
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_3;
    QSlider *heightSlider;
    QSlider *horizontalSlider_1;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *heightBox;
    QDoubleSpinBox *doubleSpinBox_1;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_17;
    QLabel *label_7;

    void setupUi(QWidget *JaneladeCalibragem)
    {
        if (JaneladeCalibragem->objectName().isEmpty())
            JaneladeCalibragem->setObjectName(QStringLiteral("JaneladeCalibragem"));
        JaneladeCalibragem->resize(566, 395);
        label_6 = new QLabel(JaneladeCalibragem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(720, 380, 57, 15));
        pushButton = new QPushButton(JaneladeCalibragem);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 360, 161, 23));
        label_3 = new QLabel(JaneladeCalibragem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 14, 551, 57));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        layoutWidget = new QWidget(JaneladeCalibragem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 160, 91, 191));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_5->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_5->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_5->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_5->addWidget(pushButton_6);

        layoutWidget1 = new QWidget(JaneladeCalibragem);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 120, 441, 231));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);

        verticalLayout_4->addWidget(label);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_4->addWidget(label_13);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_4->addWidget(label_16);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_4->addWidget(label_15);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        heightSlider = new QSlider(layoutWidget1);
        heightSlider->setObjectName(QStringLiteral("heightSlider"));
        heightSlider->setMaximum(1000);
        heightSlider->setSingleStep(10);
        heightSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(heightSlider);

        horizontalSlider_1 = new QSlider(layoutWidget1);
        horizontalSlider_1->setObjectName(QStringLiteral("horizontalSlider_1"));
        horizontalSlider_1->setMaximum(1000);
        horizontalSlider_1->setSingleStep(10);
        horizontalSlider_1->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_1);

        horizontalSlider_2 = new QSlider(layoutWidget1);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(1000);
        horizontalSlider_2->setSingleStep(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_2);

        horizontalSlider_3 = new QSlider(layoutWidget1);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(1000);
        horizontalSlider_3->setSingleStep(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_3);

        horizontalSlider_4 = new QSlider(layoutWidget1);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(1000);
        horizontalSlider_4->setSingleStep(10);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_4);

        horizontalSlider_5 = new QSlider(layoutWidget1);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(1000);
        horizontalSlider_5->setSingleStep(10);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_5);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        heightBox = new QDoubleSpinBox(layoutWidget1);
        heightBox->setObjectName(QStringLiteral("heightBox"));
        heightBox->setMaximum(1000.9);

        verticalLayout_2->addWidget(heightBox);

        doubleSpinBox_1 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_1->setObjectName(QStringLiteral("doubleSpinBox_1"));
        doubleSpinBox_1->setMaximum(1000.9);

        verticalLayout_2->addWidget(doubleSpinBox_1);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setMaximum(1000.9);

        verticalLayout_2->addWidget(doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setMaximum(1000.9);

        verticalLayout_2->addWidget(doubleSpinBox_3);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setMaximum(1000.9);

        verticalLayout_2->addWidget(doubleSpinBox_4);

        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setMaximum(1000.9);

        verticalLayout_2->addWidget(doubleSpinBox_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout->addWidget(label_17);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget->raise();
        layoutWidget->raise();
        label_6->raise();
        pushButton->raise();
        label_3->raise();

        retranslateUi(JaneladeCalibragem);

        QMetaObject::connectSlotsByName(JaneladeCalibragem);
    } // setupUi

    void retranslateUi(QWidget *JaneladeCalibragem)
    {
        JaneladeCalibragem->setWindowTitle(QApplication::translate("JaneladeCalibragem", "Janela de Calibragem", 0));
        label_6->setText(QApplication::translate("JaneladeCalibragem", "cm", 0));
        pushButton->setText(QApplication::translate("JaneladeCalibragem", "Fim da Calibragem", 0));
        label_3->setText(QApplication::translate("JaneladeCalibragem", "Para a calibragem voc\303\252 precisar\303\241 tirar 5 fotos de um objeto de altura\n"
"conhecida a 5 diferentes dist\303\242ncias da c\303\242mera:\n"
"", 0));
        pushButton_2->setText(QApplication::translate("JaneladeCalibragem", "Foto 1", 0));
        pushButton_3->setText(QApplication::translate("JaneladeCalibragem", "Foto 2", 0));
        pushButton_5->setText(QApplication::translate("JaneladeCalibragem", "Foto 3", 0));
        pushButton_4->setText(QApplication::translate("JaneladeCalibragem", "Foto 4", 0));
        pushButton_6->setText(QApplication::translate("JaneladeCalibragem", "Foto 5", 0));
        label->setText(QApplication::translate("JaneladeCalibragem", "Altura do objeto", 0));
        label_4->setText(QApplication::translate("JaneladeCalibragem", "Dist\303\242ncia :", 0));
        label_10->setText(QApplication::translate("JaneladeCalibragem", "Dist\303\242ncia :", 0));
        label_13->setText(QApplication::translate("JaneladeCalibragem", "Dist\303\242ncia :", 0));
        label_16->setText(QApplication::translate("JaneladeCalibragem", "Dist\303\242ncia :", 0));
        label_15->setText(QApplication::translate("JaneladeCalibragem", "Dist\303\242ncia :", 0));
        label_2->setText(QApplication::translate("JaneladeCalibragem", "cm", 0));
        label_5->setText(QApplication::translate("JaneladeCalibragem", "cm", 0));
        label_9->setText(QApplication::translate("JaneladeCalibragem", "cm", 0));
        label_12->setText(QApplication::translate("JaneladeCalibragem", "cm", 0));
        label_17->setText(QApplication::translate("JaneladeCalibragem", "cm", 0));
        label_7->setText(QApplication::translate("JaneladeCalibragem", "cm", 0));
    } // retranslateUi

};

namespace Ui {
    class JaneladeCalibragem: public Ui_JaneladeCalibragem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELADECALIBRAGEM_H
