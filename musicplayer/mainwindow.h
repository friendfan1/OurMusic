#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include<QStringList>
#include<QTableWidget>
#include<QDir>
#include "lyricwidget.h"
#include"config.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
friend class LyricWidget;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool isplay = false;
    bool isshow = false;
    bool isMuted=false;
    int volume=100;
    QString MusicPath = MUSICFILE;

    QStringList filelist;//文件名
    QMediaPlaylist *playerlist;
    QMediaPlayer *player;

    LyricWidget* lyric_widget;

private slots:
    void init();
    void addItem(QString name); //添加歌曲数目
    QStringList getFileNames(const QString &path);

    void slotShowCurrentMusic();
    void slotButtonStart();
    void slotButtonnext();
    void slotButtonpre();
    void slotButtonshow();
    void slotChooseMusic();
    void slotPositionChange(qint64 position);//播放进度条改变
    void slotSliderChange();//进度条拖动松开后改变进度
    void slotSliderMove(int position);//进度条拖动
    void slotVolumeBtnClicked();//音量按钮事件
    void slotVolumeSliderChange(int);//音量条拖动事件

};

#endif // MAINWINDOW_H
