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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
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
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QSlider *horizontalSlider_3;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
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
        horizontalSlider = new QSlider(layoutWidget1);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(1000);
        horizontalSlider->setSingleStep(10);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);

        horizontalSlider_2 = new QSlider(layoutWidget1);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(1000);
        horizontalSlider_2->setSingleStep(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_2);

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

        horizontalSlider_6 = new QSlider(layoutWidget1);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(1000);
        horizontalSlider_6->setSingleStep(10);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_6);

        horizontalSlider_3 = new QSlider(layoutWidget1);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(1000);
        horizontalSlider_3->setSingleStep(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(1000);

        verticalLayout_2->addWidget(spinBox);

        spinBox_2 = new QSpinBox(layoutWidget1);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(1000);

        verticalLayout_2->addWidget(spinBox_2);

        spinBox_3 = new QSpinBox(layoutWidget1);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(1000);

        verticalLayout_2->addWidget(spinBox_3);

        spinBox_4 = new QSpinBox(layoutWidget1);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMaximum(1000);

        verticalLayout_2->addWidget(spinBox_4);

        spinBox_5 = new QSpinBox(layoutWidget1);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(1000);

        verticalLayout_2->addWidget(spinBox_5);

        spinBox_6 = new QSpinBox(layoutWidget1);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMaximum(1000);

        verticalLayout_2->addWidget(spinBox_6);


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
        label->setText(QApplication::translate("JaneladeCalibragem", "Altura do objeto : ", 0));
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
