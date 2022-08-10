#ifndef COVER_H
#define COVER_H

#include"mp3header.h"
#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include<QRect>
#include<QRectF>

class Cover:public QWidget
{
    Q_OBJECT
public:
    Cover(QWidget *parent = 0);
    //QPixmap pix;
    QString filename = ":/res/OurMusic.png";
    QPixmap pixmapToRound(QPixmap &src, int radius);//封面剪裁圆形
    void Setfilename(QString _filename);//文件名称
    void SetAngle(int _angle);//设置角度
    bool isPlay = false;//用于设置是否专辑封面是否转圈
protected:
    void paintEvent(QPaintEvent *);//绘图事件
private:
    double angle = 0;//专辑旋转角度
};

#endif // COVER_H
