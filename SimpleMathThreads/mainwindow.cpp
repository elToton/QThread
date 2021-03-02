#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(thread_1, &QThread::started, exampleObject_1, &MathTread::run);
    connect(thread_2, &QThread::started, exampleObject_2, &MathTread::run);
    connect(thread_3, &QThread::started, exampleObject_3, &MathTread::run);
    connect(thread_4, &QThread::started, exampleObject_4, &MathTread::run);
    connect(thread_5, &QThread::started, exampleObject_5, &MathTread::run);
    connect(thread_6, &QThread::started, exampleObject_6, &MathTread::run);
    connect(thread_7, &QThread::started, exampleObject_7, &MathTread::run);
    connect(thread_8, &QThread::started, exampleObject_8, &MathTread::run);
    connect(thread_9, &QThread::started, exampleObject_9, &MathTread::run);
    connect(thread_10, &QThread::started, exampleObject_10, &MathTread::run);

    connect(exampleObject_1, &MathTread::finished, thread_1, &QThread::terminate);
    connect(exampleObject_2, &MathTread::finished, thread_2, &QThread::terminate);
    connect(exampleObject_3, &MathTread::finished, thread_3, &QThread::terminate);
    connect(exampleObject_4, &MathTread::finished, thread_4, &QThread::terminate);
    connect(exampleObject_5, &MathTread::finished, thread_5, &QThread::terminate);
    connect(exampleObject_6, &MathTread::finished, thread_6, &QThread::terminate);
    connect(exampleObject_7, &MathTread::finished, thread_7, &QThread::terminate);
    connect(exampleObject_8, &MathTread::finished, thread_8, &QThread::terminate);
    connect(exampleObject_9, &MathTread::finished, thread_9, &QThread::terminate);
    connect(exampleObject_10, &MathTread::finished, thread_10, &QThread::terminate);

    connect(exampleObject_1, SIGNAL(bar(QString)), ui->lineEdit, SLOT(setText(QString)));
    connect(exampleObject_2, SIGNAL(bar(QString)), ui->lineEdit_2, SLOT(setText(QString)));
    connect(exampleObject_3, SIGNAL(bar(QString)), ui->lineEdit_3, SLOT(setText(QString)));
    connect(exampleObject_4, SIGNAL(bar(QString)), ui->lineEdit_4, SLOT(setText(QString)));
    connect(exampleObject_5, SIGNAL(bar(QString)), ui->lineEdit_5, SLOT(setText(QString)));
    connect(exampleObject_6, SIGNAL(bar(QString)), ui->lineEdit_6, SLOT(setText(QString)));
    connect(exampleObject_7, SIGNAL(bar(QString)), ui->lineEdit_7, SLOT(setText(QString)));
    connect(exampleObject_8, SIGNAL(bar(QString)), ui->lineEdit_8, SLOT(setText(QString)));
    connect(exampleObject_9, SIGNAL(bar(QString)), ui->lineEdit_9, SLOT(setText(QString)));
    connect(exampleObject_10, SIGNAL(bar(QString)), ui->lineEdit_10, SLOT(setText(QString)));

    exampleObject_1->moveToThread(thread_1);
    exampleObject_2->moveToThread(thread_2);
    exampleObject_3->moveToThread(thread_3);
    exampleObject_4->moveToThread(thread_4);
    exampleObject_5->moveToThread(thread_5);
    exampleObject_6->moveToThread(thread_6);
    exampleObject_7->moveToThread(thread_7);
    exampleObject_8->moveToThread(thread_8);
    exampleObject_9->moveToThread(thread_9);
    exampleObject_10->moveToThread(thread_10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  if (exampleObject_1->running()){
      ui->pushButton->setText("start");
      //ui->lineEdit
      exampleObject_1->setRunning(false);
    }
  else {
      ui->pushButton->setText("stop");
      exampleObject_1->setRunning(true);
      thread_1->start();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
  if (exampleObject_2->running()){
      ui->pushButton_2->setText("start");
      exampleObject_2->setRunning(false);
    }
  else {
      ui->pushButton_2->setText("stop");
      exampleObject_2->setRunning(true);
      thread_2->start();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
  if (exampleObject_3->running()){
      ui->pushButton_3->setText("start");
      exampleObject_3->setRunning(false);
    }
  else {
      ui->pushButton_3->setText("stop");
      exampleObject_3->setRunning(true);
      thread_3->start();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
  if (exampleObject_4->running()){
      ui->pushButton_4->setText("start");
      exampleObject_4->setRunning(false);
    }
  else {
      ui->pushButton_4->setText("stop");
      exampleObject_4->setRunning(true);
      thread_4->start();
    }
}

void MainWindow::on_pushButton_5_clicked()
{
  if (exampleObject_5->running()){
      ui->pushButton_5->setText("start");
      exampleObject_5->setRunning(false);
    }
  else {
      ui->pushButton_5->setText("stop");
      exampleObject_5->setRunning(true);
      thread_5->start();
    }
}

void MainWindow::on_pushButton_6_clicked()
{
  if (exampleObject_6->running()){
      ui->pushButton_6->setText("start");
      exampleObject_6->setRunning(false);
    }
  else {
      ui->pushButton_6->setText("stop");
      exampleObject_6->setRunning(true);
      thread_6->start();
    }
}

void MainWindow::on_pushButton_7_clicked()
{
  if (exampleObject_7->running()){
      ui->pushButton_7->setText("start");
      exampleObject_7->setRunning(false);
    }
  else {
      ui->pushButton_7->setText("stop");
      exampleObject_7->setRunning(true);
      thread_7->start();
    }
}

void MainWindow::on_pushButton_8_clicked()
{
  if (exampleObject_8->running()){
      ui->pushButton_8->setText("start");
      exampleObject_8->setRunning(false);
    }
  else {
      ui->pushButton_8->setText("stop");
      exampleObject_8->setRunning(true);
      thread_8->start();
    }
}

void MainWindow::on_pushButton_9_clicked()
{
  if (exampleObject_9->running()){
      ui->pushButton_9->setText("start");
      exampleObject_9->setRunning(false);
    }
  else {
      ui->pushButton_9->setText("stop");
      exampleObject_9->setRunning(true);
      thread_9->start();
    }
}

void MainWindow::on_pushButton_10_clicked()
{
  if (exampleObject_10->running()){
      ui->pushButton_10->setText("start");
      exampleObject_10->setRunning(false);
    }
  else {
      ui->pushButton_10->setText("stop");
      exampleObject_10->setRunning(true);
      thread_10->start();
    }
}
