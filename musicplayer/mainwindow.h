#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include<QStringList>
#include<QTableWidget>
#include<QDir>

#include"config.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool isplay = false;
    bool isshow = false;
    QString MusicPath = MUSICFILE;

    QStringList filelist;//文件名
    QMediaPlaylist *playerlist;
    QMediaPlayer *player;

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
};

#endif // MAINWINDOW_H
