#ifndef LYRICWIDGET_H
#define LYRICWIDGET_H

#include <QWidget>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include<QFile>
#include<QLabel>
#include<QVector>
#include<QDebug>
class LyricWidget : public QWidget
{
    Q_OBJECT
private:
    QMediaPlayer* player=nullptr;
    QString LrcName;
    QVector<QString> lyrics;


    int count_lrc=-1;//计数器，标注歌词读到第几行了

    qint64 begin_time=0;//下句歌词显示开始的时间
    qint64 last_time=-50;//上句歌词显示的开始时间
    QLabel *lyric_label;//显示歌词的标签

public:
    explicit LyricWidget(QWidget *parent = nullptr);

    void loadLyric(QMediaPlayer *player,QString filename);//传入播放器和文件地址，传播放器是为了得到播放进度。播放或者切换歌曲时应该调用此函数

    bool IsLrcExist=false;
signals:

public slots:
    void showLyric(qint64);
};

#endif // LYRICWIDGET_H
