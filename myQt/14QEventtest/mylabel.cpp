#include "mylabel.h"

MyLabel::MyLabel(QWidget *parent)
    : QLabel{parent}
{
    setMouseTracking(true);
}

void MyLabel::enterEvent(QEnterEvent *event){
    qDebug()<<"鼠标进入";
}

void MyLabel::leaveEvent(QEvent *event){
    qDebug()<<"鼠标离开";
}

void MyLabel::mousePressEvent(QMouseEvent*ev){
    if(ev->button()==Qt::LeftButton){
    QString str=QString("鼠标按下了 x=%1  y=%2是全局的  gx=%3  gy=%4")\
                      .arg(ev->position().x()).arg(ev->position().y()).\
                  arg(ev->globalPosition().x()).arg(ev->globalPosition().y());
    qDebug()<<str;
    qDebug()<<ev->pos();
    }
}

void MyLabel::mouseReleaseEvent(QMouseEvent*ev){
    qDebug()<<"鼠标释放";

}

void MyLabel::mouseMoveEvent(QMouseEvent*ev){
    if(ev->buttons()&Qt::LeftButton){
    qDebug()<<"鼠标移动";
    }
}

bool MyLabel::event(QEvent*ev){

    if(ev->type()==QEvent::MouseButtonPress){
        //dynamic_cast是动态类型检查，因为传入的本身就是一个
        QMouseEvent *Ev=dynamic_cast<QMouseEvent*>(ev);
        QString str=QString("Event 鼠标按下了 x=%1  y=%2是全局的  gx=%3  gy=%4")\
                          .arg(Ev->position().x()).arg(Ev->position().y()).\
                      arg(Ev->globalPosition().x()).arg(Ev->globalPosition().y());
        qDebug()<<str;
        return true;
    }
    else if(ev->type()==QEvent::KeyPress){
        qDebug() << "按下了键盘";
        return true;
    }
    else return QLabel::event(ev);
}
