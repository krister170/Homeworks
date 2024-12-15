#include "exampleclass.h"
#include <QDebug>

ExampleClass::ExampleClass(QObject *parent)
    : QObject(parent)
{
}

void ExampleClass::startToWait()
{
    qDebug() << "Starting to wait...";
    QThread::sleep(2);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug() << "Hello from the slot!";
}
