#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include<QFile>
class Administrator{
public:
    Administrator();


    //管理员的数量
    static int numofAdmin;

    //静态成员函数实现对管理员数量的获取
    static int getnumofAdmin();

private:
};

#endif // ADMINISTRATOR_H
