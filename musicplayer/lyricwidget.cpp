#include "lyricwidget.h"

LyricWidget::LyricWidget(QWidget *parent) : QWidget(parent)
{

    lyric_label=new QLabel(this);
    lyric_label->setText("");
    setFixedSize(350,40);
    lyric_label->resize(350,40);

}

void LyricWidget::loadLyric(QMediaPlayer *player,QString filename){
    lyrics.clear();//清除已读的全部歌词
    begin_time=0;
    count_lrc=-1;
    if(this->player==nullptr){
        this->player=player;
        connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(showLyric(qint64)));
    }
    QString temp=filename;
    int i=temp.lastIndexOf('.');
    temp.remove(i,temp.length()-i);
    LrcName=temp+".lrc";//寻找同名目录的.lrc文件
//    qDebug()<<LrcName;
    QFile reader(LrcName);
    reader.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!reader.isOpen()){
        IsLrcExist=false;
        lyric_label->setText("");//无歌词文件，则显示为空白
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
    if(position<begin_time)return;//进度未到时间点，也不做动作
    if(count_lrc>=lyrics.length())return;//歌词读完了就不做动作

    //读取下标指示的本句歌词
    if(count_lrc<0){
        lyric_label->setText("");
    }
    else{
        lyric_label->setText(lyrics[count_lrc].right(lyrics[count_lrc].length()-lyrics[count_lrc].indexOf(']')-1));
    }

    //读取下一句歌词的时间点
    do{
        count_lrc++;
    }while( (!lyrics[count_lrc].startsWith('[')) && count_lrc<lyrics.length());//让下标指向下一句歌词
    if(count_lrc>=lyrics.length())return;
    QString lrc=lyrics[count_lrc];
    QString timeInfo=lyrics[count_lrc].mid(lyrics[count_lrc].indexOf('[')+1,lyrics[count_lrc].indexOf(']')-lyrics[count_lrc].indexOf('[')-1);
    int minute=timeInfo.left(timeInfo.indexOf(':')).toInt();
    timeInfo.remove(0,timeInfo.indexOf(':')+1);
    for(int i=0;i<timeInfo.length();i++){
        if(timeInfo[i]==':')timeInfo[i]='.';
    }
    int minsec=(int)(timeInfo.toDouble()*1000.0);

    begin_time=minute*60000+minsec;//记录下一句歌词的开始时间

}
