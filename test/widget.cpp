#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *btn1=new QPushButton("开启",this);
    btn1->move(300,100);
    QPushButton *btn2=new QPushButton("关闭",this);
    btn2->move(300,300);
}

Widget::~Widget()
{
    delete ui;
}
