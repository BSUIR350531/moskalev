#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLite");
    mydb.setDatabaseName("E:/MyWork/moskalev/my work/mydatabase.sqlite");

    if (!mydb.open())
        ui->label->setText("Failed to open the database");
    else
        ui->label->setText("Database is connected");
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
  Createwindow *wnd = new Createwindow(this);
  wnd->show();
}
