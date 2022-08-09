#include "stylusandrecord.h"

StylusandRecord::StylusandRecord(QWidget *parent) : QWidget(parent)
{
    setFixedSize(320,320);

}

void StylusandRecord::paintEvent(QPaintEvent *){
        QPainter painter(this);
        QPixmap pix_record;

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

        painter.setWindow(-(int)(pix_record.width()/2),-(int)(pix_record.height()/2),pix_record.width(),pix_record.height());
        painter.drawPixmap(-(int)(pix_record.width()/2),-(int)(pix_record.height()/2),pix_record.width(),pix_record.height(),pix_record);

 }

