#include "mathtread.h"

MathTread::MathTread(QObject *parent) :
  QObject(parent),
  m_running(false)
{
}

bool MathTread::running() const
{
  return m_running;
}

void MathTread::run()
{
  count = 0;
  while (m_running)
    {
        count++;
        emit bar(QString::number(count));
        QThread::msleep(100);
    }
    emit finished();
}

void MathTread::setRunning(bool running)
{
    if (m_running == running)
       return;

    m_running = running;
    emit runningChanged(running);
}
