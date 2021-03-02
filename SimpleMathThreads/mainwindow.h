#pragma once

#include <QMainWindow>
#include "mathtread.h"
#include "ui_mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow
    : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_pushButton_clicked();
  void on_pushButton_2_clicked();
  void on_pushButton_3_clicked();
  void on_pushButton_4_clicked();
  void on_pushButton_5_clicked();
  void on_pushButton_6_clicked();
  void on_pushButton_7_clicked();
  void on_pushButton_8_clicked();
  void on_pushButton_9_clicked();
  void on_pushButton_10_clicked();

private:
  Ui::MainWindow *ui;

  QThread* thread_1 = new QThread;
  QThread* thread_2 = new QThread;
  QThread* thread_3 = new QThread;
  QThread* thread_4 = new QThread;
  QThread* thread_5 = new QThread;
  QThread* thread_6 = new QThread;
  QThread* thread_7 = new QThread;
  QThread* thread_8 = new QThread;
  QThread* thread_9 = new QThread;
  QThread* thread_10 = new QThread;

  MathTread* exampleObject_1 = new MathTread;
  MathTread* exampleObject_2 = new MathTread;
  MathTread* exampleObject_3 = new MathTread;
  MathTread* exampleObject_4 = new MathTread;
  MathTread* exampleObject_5 = new MathTread;
  MathTread* exampleObject_6 = new MathTread;
  MathTread* exampleObject_7 = new MathTread;
  MathTread* exampleObject_8 = new MathTread;
  MathTread* exampleObject_9 = new MathTread;
  MathTread* exampleObject_10 = new MathTread;
  //int count_1;
};
