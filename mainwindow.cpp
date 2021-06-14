#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setStyleSheet("background:transparent;");
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString text;
void MainWindow::on_pushButton_clicked()
{
    text = ui->label->text();
    if (text.size() == 0) ui->label->setText("Hello Qt8!");
    else ui->label->clear();

    this->move(500, 500);
}

