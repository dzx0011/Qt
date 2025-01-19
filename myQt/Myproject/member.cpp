#include "member.h"

Member::Member() {}




QString Member::NowLogonName=0;

int Member::NumOfComments=GetNumOfComments();

int Member::GetNumOfComments(){
    QFile file("./comments.txt");
    file.open(QIODevice::ReadOnly);
    return QString::fromStdString(file.readAll().toStdString()).split("##COMMENT##").size()-1;
}
