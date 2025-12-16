#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter ++; // kasvatetaan laskuria

    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;   // nollataan laskuri

    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");
}
