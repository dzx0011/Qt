#ifndef MEMBER_H
#define MEMBER_H
#include<QString>
#include<QFile>
class Member{
public:
    Member();

    static QString NowLogonName;

    static int NumOfComments;

    static int GetNumOfComments();

};

#endif // MEMBER_H
