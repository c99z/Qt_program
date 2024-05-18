#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include <QString>
class Teacher : public QObject
{
    Q_OBJECT//宏,使得类可以使用元对象的特性
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //自定义信号  写道signals下
    //返回值void 只需要声明 不需要实现
    //可以有参数  可以重载
    void hungry();
    void hungry(QString foodName);//重载版本


};

#endif // TEACHER_H
