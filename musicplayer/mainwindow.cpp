#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Bpause,&QPushButton::clicked,this,&MainWindow::slotButtonStart);
    connect(ui->Bnext,&QPushButton::clicked,this,&MainWindow::slotButtonnext);
    connect(ui->Blast,&QPushButton::clicked,this,&MainWindow::slotButtonpre);
    connect(ui->Bmenu,&QPushButton::clicked,this,&MainWindow::slotButtonshow);
    connect(ui->tableWidget,QTableWidget::itemDoubleClicked,this,&MainWindow::slotChooseMusic);
    
    init();     //初始化
    ui->tableWidget->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){
    playerlist = new QMediaPlaylist;//播放列表
    player = new QMediaPlayer;
    filelist = getFileNames(this->MusicPath);//获取文件夹下的所有文件
    qDebug()<<filelist;
    for(int i = 0;i<filelist.size();i++){//输出音乐文件到播放列表
        QString fileName = filelist.at(i);
        addItem(fileName);
        playerlist->addMedia(QUrl::fromLocalFile(MusicPath+"\\"+fileName));
    }
    playerlist->setCurrentIndex(0);
    player->setPlaylist(playerlist);//将播放列表加载到播放器
    connect(player,&QMediaPlayer::currentMediaChanged,this,&MainWindow::slotShowCurrentMusic);
    slotShowCurrentMusic();

}

QStringList MainWindow::getFileNames(const QString &path){
    QDir dir(path);
    QStringList nameFilters;
    nameFilters<<"*.mp3";
    QStringList files = dir.entryList(nameFilters,QDir::Files|QDir::Readable,QDir::Name);
    return files;
}

void MainWindow::slotButtonStart(){
    if(!isplay){
        isplay = true;
        ui->Bpause->setIcon(QIcon(":/res/pause.png"));
        player->play();
    }else{
        isplay = false;
        ui->Bpause->setIcon(QIcon(":/res/start.png"));
        player->pause();
    }
}

void MainWindow::slotButtonnext(){
    if(playerlist->currentIndex()<filelist.size()-1){
        playerlist->next();
        playerlist->nextIndex();
    }
}

void MainWindow::slotButtonpre(){
    if(playerlist->currentIndex()>0){
        playerlist->previous();
        playerlist->previousIndex();
    }
}

void MainWindow::slotButtonshow(){
    if(!isshow){
        isshow = true;
        ui->tableWidget->show();
    }else{
        isshow = false;
        ui->tableWidget->hide();
    }
}

void MainWindow::slotChooseMusic(){
    int rowindex;
    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
    if(!items.empty()) //表格有某行被选中
    {
        // 获取该行的行号
        rowindex = ui->tableWidget->row(items.at(0));
    }
    playerlist->setCurrentIndex(rowindex);
}

void MainWindow::slotShowCurrentMusic(){
    int index = playerlist->currentIndex();
    QString songName = filelist.at(index);
    ui->currentmusic->setText(songName);
}

void MainWindow::addItem(QString name){
    int count = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(count + 1);

    QTableWidgetItem *itemName = new QTableWidgetItem(name);
    ui->tableWidget->setItem(count,0,itemName);
}
