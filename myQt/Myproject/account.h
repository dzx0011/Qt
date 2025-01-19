#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<QString>
class Account
{
public:
    Account();
    //获取用户名
    QString getname();
    //获取密码
    QString getkey();
private:
    QString m_username;
    QString m_key;
};

#endif // ACCOUNT_H
