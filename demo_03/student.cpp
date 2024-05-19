#include "student.h"
#include <QString>
#include<QDebug>
Student::Student(QObject *parent)
    : QObject{parent}
{}
void Student::treat()
{
    qDebug()<<"请老师吃饭";
}
void Student::treat(QString foodName)
{
    //QString->char* 先转成QByteArray （.toUtf8()）再转成char*
    qDebug()<<"请老师吃饭就吃"<<foodName.toUtf8().data();
}
