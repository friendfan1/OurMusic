#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include<QStringList>
#include<QTableWidget>
#include<QDir>

#include"cover.h"

#include "lyricwidget.h"

#include"config.h"
#include"mp3header.h"
#include"stylusandrecord.h"
#include<QTimer>
#include "stylus.h"
#include"mycover.h"
#include<QString>
#include<QStringList>
#include<QFileDialog>
#include<QFile>
#include <QMessageBox>

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
    StylusandRecord *StyandRe;//小挂件
    Stylus *Sty;
    Cover *cover;
    QTimer *m_timer;
    //QTimer *T_timer;
    MP3Header mp3;
    MyCover *test;
    QPushButton *CovBtn;


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

    //声明动作
    QAction * buttonAction1;
    QAction * buttonAction2;
    //声明菜单
    QMenu * buttonMenu;
    //右键所选到的行数
    int rowSelect;

    //播放模式
    enum playMode {Sequential, shuffle, currentloop, loop}modeNow;
    int modeNowInt = 0;

    //切换封面与歌词的标记
    bool isCov = true;

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

    void slotPixShow();//显示专辑封面

    void slotCopySong();//新增歌曲进入播放列表
    void slotDeleteSongList();//从列表中删除歌曲

    void slotChangePlayMode();//切换歌曲播放模式

    void slotChangeCovorLyc();

public:
    void Cover_init();//封面显示功能初始化
    void CovBtn_init();//按钮初始化

    void Cover_hide();//隐藏封面
    void Cover_show();//隐藏封面
};



#endif // MAINWINDOW_H
