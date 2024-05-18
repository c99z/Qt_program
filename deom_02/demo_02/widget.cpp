#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
//命名规范
//类名 首字母大写 单词之间首字母大写
//函数名驼峰命名法
//注释 crtl+/
//运行 crtl+r
//编译 crtl+b
//查找 crtl+f
//整体移动 crtl+shift+↑或者↓
//帮助F1
//自动对齐 crtl+i
//同名之间的.h和.cpp切换F4
//帮助文档F1
Widget::Widget(QWidget *parent)//
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //创建一个按钮
    QPushButton *btn =new QPushButton;
    class MyPushButton:public QPushButton//继承
    {
    };
    //btn->show();//show 以顶层的方式弹出窗口控件
    //让btn对象依赖myWidget窗口中
    btn->setParent(this);
    btn->setText("Helloworld");
    ui->setupUi(this);
    //创建第二个按钮
    QPushButton *btn2=new QPushButton("第二个按钮",this);//默认窗口比较小
    resize(400,400);//重置大小
    //第二个按钮会把第一个按钮给覆盖了
    btn2->move(400,100);//移动第二个按钮
    btn2->resize(250,250);//设置按钮大小

    //信号和槽的连接方式
    connect(btn2,&MyPushButton::clicked,this,&QWidget::close);


    //默认编码最好是UTF-8

    //设置窗口标题
    setWindowTitle("第一个界面");
    //设置固定窗口大小
    setFixedSize(600,800);
    //new会自动释放空间不用手动释放
}

Widget::~Widget()
{
    delete ui;
}
