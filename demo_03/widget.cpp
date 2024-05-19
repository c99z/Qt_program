#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(500,500);
    //创建一个老师对象
    this->cz=new Teacher(this);
    this->st=new Student(this);
    QPushButton *btn1=new QPushButton("下课",this);

    //&Teacher::hungry是函数地址 可以用一个函数指针指向函数地址
    //用函数指针指向特定的重载函数
    //返回值为空
    void (Teacher::*teacherPtr)(QString)=&Teacher::hungry;
    void (Student::*studentPtr)()=&Student::treat;
    //信号连接信号
    connect(btn1,&QPushButton::clicked,cz,&Teacher::singal2);
    connect(cz,&Teacher::singal2,st,studentPtr);
    //断开信号
    disconnect(cz,&Teacher::singal2,st,studentPtr);

    classIsOver();
}
void Widget::classIsOver()
{
    emit cz->hungry("宫保鸡丁");//
}

Widget::~Widget()
{
    delete ui;
}
