#include "coins.h"
#include<QDebug>

coins::coins(int num, QObject *parent)
    : QObject{parent}, num(num)
{}

void coins::addcoins(){
    num +=1;
    showcoins();
}

void coins::deletecoins(){
    num -= 1;
    showcoins();
}

void coins::showcoins(){
    qDebug() << "有" << num << "个硬币";
}
