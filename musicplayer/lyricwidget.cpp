#include "lyricwidget.h"

LyricWidget::LyricWidget(QWidget *parent) : QWidget(parent)
{

    lyric_label=new QLabel(this);
    previous_lyric=new QLabel(this);
    next_lyric=new QLabel(this);

    lyric_label->setText("");
    setFixedSize(LYRIC_WIDTH,LYRIC_HEIGHT);
    setStyleSheet("background:transparent;");
    lyric_label->resize(LYRIC_WIDTH,60);
    lyric_label->move(0,120);
    lyric_label->setStyleSheet("font: 14pt \"黑体\"; color: rgb(255, 0, 0);background:transparent;");

    previous_lyric->resize(LYRIC_WIDTH,140);
    previous_lyric->move(0,10);
    previous_lyric->setStyleSheet("font: 10pt \"黑体\";background:transparent;");
    next_lyric->resize(LYRIC_WIDTH,180);
    next_lyric->move(0,160);
    next_lyric->setStyleSheet("font: 10pt \"黑体\";background:transparent;");

    lyric_label->setAlignment(Qt::AlignCenter);
    previous_lyric->setAlignment(Qt::AlignCenter);
    next_lyric->setAlignment(Qt::AlignCenter);

    btn=new QPushButton(this);
    btn->resize(this->width(),this->height());
    btn->setFlat(true);
    btn->setStyleSheet("QPushButton{border:none;background:transparent;}");
    btn->setCursor(Qt::PointingHandCursor);
}

void LyricWidget::setDelay(qint64 minsec){
    delay=minsec;
}

void LyricWidget::loadLyric(QMediaPlayer *player,QString filename){
    lyric_label->setText("");
    previous_lyric->setText("");
    next_lyric->setText("");
    lyrics.clear();//清除已读的全部歌词

    begin_time=0;
    last_time=-0xffffff;
    count_lrc=-1;
    if(this->player==nullptr){
        this->player=player;
        connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(showLyric(qint64)));
    }
    QString temp=filename;
    int i=temp.lastIndexOf('.');
    temp.remove(i,temp.length()-i);
    LrcName=temp+".lrc";//寻找同名目录的.lrc文件
    //qDebug()<<LrcName;
    QFile reader(LrcName);
    reader.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!reader.isOpen()){
        IsLrcExist=false;
        lyric_label->setText("还没有歌词哦");//无歌词文件，则显示为空白
        //qDebug()<<"未找到歌词文件"<<endl;
        return;
    }else{
        IsLrcExist=true;
        char temp_read[256];
        while(!reader.atEnd()){
            reader.readLine(temp_read,256);
            lyrics.push_back(QString(temp_read));
        }
        reader.close();
    }
}
void LyricWidget::showLyric(qint64 position){
    if(!IsLrcExist)return;//没有歌词则不做动作
    if(position+delay<last_time){
    begin_time=0;
    last_time=-0xffffff;
    count_lrc=-1;
}
    if(position+delay<begin_time&&position+delay>=last_time)
    return;//进度未到时间点，也不做动作
    if(count_lrc>=lyrics.length())return;//歌词读完了就不做动作



    while(position+delay>=begin_time){
        //读取下标指示的本句歌词
        if(count_lrc<0){
            previous_lyric->setText("");
            lyric_label->setText("");
            QString next_lrc;
            for(int i=1;i<=4;i++){
                if(count_lrc+i>=lyrics.length()) next_lrc+="\n\n";
                else next_lrc+=lyrics[count_lrc+i].right(lyrics[count_lrc+i].length()-lyrics[count_lrc+i].indexOf(']')-1)+"\n";
            }
            next_lyric->setText(next_lrc);
        }
        else{
            QString pre_lrc;
            for(int i=3;i>0;i--){
                if(count_lrc-i<0) pre_lrc+="\n\n";
                else pre_lrc+=lyrics[count_lrc-i].right(lyrics[count_lrc-i].length()-lyrics[count_lrc-i].indexOf(']')-1)+"\n";
            }
            QString next_lrc;
            for(int i=1;i<=4;i++){
                if(count_lrc+i>=lyrics.length()) next_lrc+="\n\n";
                else next_lrc+=lyrics[count_lrc+i].right(lyrics[count_lrc+i].length()-lyrics[count_lrc+i].indexOf(']')-1)+"\n";
            }

            previous_lyric->setText(pre_lrc);
            next_lyric->setText(next_lrc);
            lyric_label->setText(lyrics[count_lrc].right(lyrics[count_lrc].length()-lyrics[count_lrc].indexOf(']')-1));

        }

        //读取下一句歌词的时间点
        do{
            count_lrc++;
        }while( count_lrc<lyrics.length() && (!lyrics[count_lrc].startsWith('[')));//让下标指向下一句歌词
        if(count_lrc>=lyrics.length())return;
        QString lrc=lyrics[count_lrc];
        QString timeInfo=lyrics[count_lrc].mid(lyrics[count_lrc].indexOf('[')+1,lyrics[count_lrc].indexOf(']')-lyrics[count_lrc].indexOf('[')-1);
        int minute=timeInfo.left(timeInfo.indexOf(':')).toInt();
        timeInfo.remove(0,timeInfo.indexOf(':')+1);
        for(int i=0;i<timeInfo.length();i++){
            if(timeInfo[i]==':')timeInfo[i]='.';
        }
        int minsec=(int)(timeInfo.toDouble()*1000.0);
        last_time=begin_time;
        begin_time=minute*60000+minsec;//记录下一句歌词的开始时间
    }



}
