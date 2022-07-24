#ifndef STYLUSANDRECORD_H
#define STYLUSANDRECORD_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include "config.h"
#include <QDebug>

class StylusandRecord : public QWidget
{
    Q_OBJECT
public:
    StylusandRecord(QWidget *parent = 0);
    bool isPlay;//用于设置是否专辑封面是否转圈
protected:
    void paintEvent(QPaintEvent *);//绘图事件
private:
    double angle = 0;//唱片旋转角度
};

#endif // STYLUSANDRECORD_H
