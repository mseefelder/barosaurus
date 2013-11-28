#ifndef MEASURINGWINDOW_H
#define MEASURINGWINDOW_H

#include <QMainWindow>
#include <cv.h>
#include <highgui.h>
#include "camera.h"
#include <QMessageBox>
#include "linemarker.h"
#include "linemarkercontrols.h"

namespace Ui {
class MeasuringWindow;
}

class MeasuringWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MeasuringWindow(QWidget *parent = 0);
    ~MeasuringWindow();
    void setLineMarker(LineMarker mytarget);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MeasuringWindow *ui;
};

#endif // MEASURINGWINDOW_H
