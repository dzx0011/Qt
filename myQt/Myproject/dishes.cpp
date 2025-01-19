#include "dishes.h"
#include<QDebug>
dishes::dishes(){}
dishes::dishes(QString dishname,QStringList ingredients,place p1,double price):DishName(dishname),Ingredients(ingredients),Place(p1),Price(price){}

void dishes::FromObjectToFile(){
    QFile file("./dishes.txt");
    file.open(QIODevice::Append);
    file.write(DishName.toUtf8());
    file.write(" ");
    while(Ingredients.size()>1){
        file.write(Ingredients.front().toUtf8());
        file.write(",");
        Ingredients.pop_front();
    }file.write(Ingredients.front().toUtf8());Ingredients.pop_front();file.write(" ");
    file.write(Place.restaurant.toUtf8()); file.write(",");file.write(Place.floors.toUtf8()); file.write(",");file.write(Place.windows.toUtf8());file.write(" ");
    file.write(QByteArray::number(Price));file.write(" ");
    file.write(OtherAttributes.toUtf8());
    file.close();
}



deque<dishes>* dishes::FromFileToObject(){
    deque<dishes>* d1=new deque<dishes>;
    QFile file("./dishes.txt");
    file.open(QIODevice::ReadOnly);
    QByteArray bytearrya;
    for(int i=1;i<=NumOfDishes;i++){
        bytearrya=file.readLine();
        dishes dish;

        dish.DishName=bytearrya.split(' ')[0];

        int temp=0;
        while(bytearrya.split(' ')[1].split(',').size()>temp)dish.Ingredients<<bytearrya.split(' ')[1].split(',')[temp++];

        dish.Place.restaurant=bytearrya.split(' ')[2].split(',')[0];
        dish.Place.floors=bytearrya.split(' ')[2].split(',')[1];
        dish.Place.windows=bytearrya.split(' ')[2].split(',')[2];

        dish.Price=bytearrya.split(' ')[3].toDouble();

        dish.OtherAttributes=bytearrya.split(' ')[4];
        if(dish.OtherAttributes[dish.OtherAttributes.size()-1]!='\n')dish.OtherAttributes.append('\n');
        d1->push_back(dish);
    }
    file.close();
    return d1;
}




int dishes::getNumOfDishes(){
    QFile file("./dishes.txt");
    file.open(QIODevice::ReadOnly);
    int temp=0;
    while(!file.atEnd()){
        temp++;
        file.readLine();
    }
    file.close();
    return temp;
}

int dishes::NumOfDishes=getNumOfDishes();
