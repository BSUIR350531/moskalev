#include "createwindow.h"
#include "ui_createwindow.h"

Createwindow::Createwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Createwindow)
{
    ui->setupUi(this);
}

Createwindow::~Createwindow()
{
    delete ui;
}

void Createwindow::on_pushButton_2_clicked()
{
    close();
}
