#ifndef CLOSE_H
#define CLOSE_H

#include <QObject>

class close : public QObject
{
    Q_OBJECT
public:
    explicit close(QObject *parent = nullptr);

signals:
    void close2();
};

#endif // CLOSE_H
