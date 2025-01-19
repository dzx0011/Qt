#ifndef DISHES_H
#define DISHES_H
#include<QString>
#include<QStringList>
#include<QFile>
#include<QByteArray>
#include<deque>
using namespace std;
class dishes
{
public:
    dishes();
    QString DishName;

    QStringList Ingredients;

    struct place{
        QString restaurant;
        QString floors;
        QString windows;
        place(QString r,QString f,QString w):restaurant(r),floors(f),windows(w){}
        place()=default;
    }Place;


    double Price;
    dishes(QString dishname,QStringList ingredients,place p1,double price);

    QString OtherAttributes;


    static int NumOfDishes;
    static int getNumOfDishes();

    void FromObjectToFile();
    static deque<dishes> *FromFileToObject();
};

#endif // DISHES_H
