#include "cover.h"
#include<QDebug>

Cover::Cover(QWidget *parent)
    : QWidget(parent){
    setFixedSize(127,127);
}

QPixmap Cover::pixmapToRound(QPixmap &src, int radius)
{
    if(src.isNull())
    {
        return QPixmap();
    }
    QPixmap pix(src.width(), src.height());
    pix.fill(Qt::transparent);  //设置图片透明
    QPainter painter(&pix);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    QPainterPath path;
    path.addEllipse(src.rect().center(), radius, radius);
    painter.setClipPath(path);

    painter.drawPixmap(QRect(src.width() / 2 - radius, src.height() / 2 - radius,
                             radius * 2, radius * 2), src);
    return pix;
}
void Cover::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    QPixmap pix_stylus;
    QPixmap pix_record;
    QPainterPath path;

    //截取为圆形
    int round = qMin(width(), height());
    path.addEllipse(0, 0, round, round);
    painter.setClipPath(path);

    pix.load(filename);
    pix_stylus.load(STYLUS);
    pix_record.load(RECORD);

    if(angle >= 360){
        angle = 0;
    }
    if(isPlay){
        angle += 0.5;
        painter.rotate(angle);
    }
    else{
        painter.rotate(angle);
    }

    painter.setWindow(-(int)(pix.width()/2),-(int)(pix.height()/2),pix.width(),pix.height());
    painter.drawPixmap(-(int)(pix.width()/2),-(int)(pix.height()/2),pix.width(),pix.height(),pix);
}

void Cover::Setfilename(QString _filename){
    filename = _filename;
}

void Cover::SetAngle(int _angle){
    angle = _angle;
}
