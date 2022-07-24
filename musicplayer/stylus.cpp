#include "stylus.h"

Stylus::Stylus(QWidget *parent) : QWidget(parent)
{
    setFixedSize(330,330);
}
void Stylus::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix_stylus;

    pix_stylus.load(STYLUS);

    if(isPlay){
        painter.rotate(50);
    }
    else{
        painter.rotate(0);
    }

    painter.setWindow(-(int)(pix_stylus.width()/2),-(int)(pix_stylus.height()/2),pix_stylus.width(),pix_stylus.height());
    painter.drawPixmap(-(int)(pix_stylus.width()/2),-(int)(pix_stylus.height()/2),pix_stylus.width(),pix_stylus.height(),pix_stylus);


}
