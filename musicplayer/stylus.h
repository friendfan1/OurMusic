#ifndef STYLUS_H
#define STYLUS_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include "config.h"
#include <QDebug>

class Stylus : public QWidget
{
    Q_OBJECT
public:
    Stylus(QWidget *parent = nullptr);
    bool isPlay = false;//用于设置是否专辑封面是否转圈
protected:
    void paintEvent(QPaintEvent *);//绘图事件
signals:

public slots:
};

#endif // STYLUS_H
