#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

#include <QDialog>

namespace Ui {
class Createwindow;
}

class Createwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Createwindow(QWidget *parent = 0);
    ~Createwindow();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Createwindow *ui;
};

#endif // CREATEWINDOW_H
