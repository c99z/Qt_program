#ifndef STUDENT_H
#define STUDENT_H
#include <QDebug>
#include <QPushButton>
#include <QString>

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:
public slots://早期版本必须写到这个作用域下 高级版本可以写到public下 可以写到全局下
    //返回值void 需要声明也需要实现 有参数可以发生重载
    void treat();
    void treat(QString foodName);

};

#endif // STUDENT_H
