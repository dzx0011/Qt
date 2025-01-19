#include "administrator.h"

Administrator::Administrator() {}

int Administrator::numofAdmin=Administrator::getnumofAdmin();

int Administrator::getnumofAdmin(){
    QFile file("./admin.txt");
    file.open(QIODevice::ReadOnly);
      int temp=0;
    while(!file.atEnd()){
        temp++;
        file.readLine();
    }
    file.close();
    return temp;
}



