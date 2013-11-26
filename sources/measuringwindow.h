#ifndef MEASURINGWINDOW_H
#define MEASURINGWINDOW_H

#include <QMainWindow>

namespace Ui {
class MeasuringWindow;
}

class MeasuringWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MeasuringWindow(QWidget *parent = 0);
    ~MeasuringWindow();

private:
    Ui::MeasuringWindow *ui;
};

#endif // MEASURINGWINDOW_H
