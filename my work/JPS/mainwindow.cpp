#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CloseButton_clicked()
{
    close();
}

void MainWindow::on_action_2_triggered()
{
    close();
}

void MainWindow::on_CreateButton_clicked()
{
  /*  Createwindow *wnd = new Createwindow(this);
    *wnd -> show();*/ //здесь попытки "подружить" второе окно с первым, почему-то выдает ошибку
}
