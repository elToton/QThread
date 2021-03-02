#pragma once

#include <QObject>
#include <QThread>

class MathTread : public QObject
{
  Q_OBJECT

  Q_PROPERTY(bool running READ running WRITE setRunning NOTIFY runningChanged)

  int count;

  bool m_running;

signals:
    void finished();
    void runningChanged(bool running);
    void bar(QString str);

public:
    explicit MathTread(QObject *parent = nullptr);
    bool running() const;

public slots:
    void run();
    void setRunning(bool running);
};

