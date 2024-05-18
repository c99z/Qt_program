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
    qDebug()<<"请老师吃饭就吃"<<foodName;
}
