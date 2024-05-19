#ifndef OPEN_H
#define OPEN_H
#include <QWidget>
QT_BEGIN_NAMESPACE
#include <QObject>

class open : public QObject
{
    Q_OBJECT
public:
    explicit open(QObject *parent = nullptr);

signals:
    void open2()
    {
        QWidget o2
    }
};

#endif // OPEN_H
