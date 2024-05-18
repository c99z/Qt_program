#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建一个老师对象
    this->cz=new Teacher(this);
    this->st=new Student(this);
    //&Teacher::hungry是函数地址 可以用一个函数指针指向函数地址
    //用函数指针指向特定的重载函数
    //返回值为空
    void (Teacher::*teacherPtr)(QString)=&Teacher::hungry;
    void (Student::*studentPtr)(QString)=&Student::treat;
    connect(cz,teacherPtr,st,studentPtr);

    classIsOver();
}
void Widget::classIsOver()
{
    emit cz->hungry("饭");
}

Widget::~Widget()
{
    delete ui;
}
