#ifndef COINS_H
#define COINS_H

#include <QObject>

class coins : public QObject
{
    Q_OBJECT
public:
    explicit coins(int num=0,QObject *parent = nullptr);
    void showcoins();
    void addcoins();
    void deletecoins();
private:
    int num;

signals:
};

#endif // COINS_H
