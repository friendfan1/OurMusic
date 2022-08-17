#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<windows.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_timer=new QTimer(this);
    m_timer->start(10);
    Cover_init();
    CovBtn_init();

    init();     //初始化
    ui->tableWidget->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){
    connect(ui->Bpause,&QPushButton::clicked,this,&MainWindow::slotButtonStart);
    connect(ui->Bpause,&QPushButton::clicked,this,&MainWindow::slotPixShow);
    connect(ui->Bnext,&QPushButton::clicked,this,&MainWindow::slotButtonnext);
    connect(ui->Blast,&QPushButton::clicked,this,&MainWindow::slotButtonpre);
    connect(ui->Bmenu,&QPushButton::clicked,this,&MainWindow::slotButtonshow);
    connect(ui->tableWidget,&QTableWidget::itemDoubleClicked,this,&MainWindow::slotChooseMusic);
    connect(m_timer,&QTimer::timeout,[=](){
       update();
    });
    connect(ui->AddtoList,&QPushButton::clicked,this,&MainWindow::slotCopySong);
    connect(ui->playMode,&QPushButton::clicked,this,&MainWindow::slotChangePlayMode);


    playerlist = new QMediaPlaylist;//播放列表
    player = new QMediaPlayer;
    filelist = getFileNames(this->MusicPath);//获取文件夹下的所有文件
    for(int i = 0;i<filelist.size();i++){//输出音乐文件到播放列表
        QString fileName = filelist.at(i);
        addItem(fileName);
        playerlist->addMedia(QUrl::fromLocalFile(MusicPath+"\\"+fileName));
    }
    playerlist->setCurrentIndex(0);
    player->setPlaylist(playerlist);//将播放列表加载到播放器

    lyric_widget=new LyricWidget(this);
    lyric_widget->move(120,380);//初始化歌词部件

    connect(player,&QMediaPlayer::currentMediaChanged,this,&MainWindow::slotShowCurrentMusic);
    slotShowCurrentMusic();
    ui->horizontalSlider->setMaximum(player->duration()/1000);//设置进度条最大值为当前媒体的长度
    ui->label->setText("");
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(slotPositionChange(qint64)));//播放进度改变对应进度条改变
    connect(ui->horizontalSlider,SIGNAL(sliderMoved(int)),this,SLOT(slotSliderMove(int)));//拖动时改变进度条的数字，但是不改变进度，否则音乐播放会卡
    connect(ui->horizontalSlider,SIGNAL(sliderReleased()),this,SLOT(slotSliderChange()));//松开进度条，改变播放进度
    player->setVolume(100);
    ui->volume_label->setText("100");
    ui->VolumeSlider->setValue(player->volume());
    connect(ui->volume_btn,&QAbstractButton::clicked,this,&slotVolumeBtnClicked);
    connect(ui->VolumeSlider,SIGNAL(sliderMoved(int)),this,SLOT(slotVolumeSliderChange(int)));

    connect(playerlist,&QMediaPlaylist::currentIndexChanged,this,&MainWindow::slotPixShow);
    connect(playerlist,&QMediaPlaylist::currentIndexChanged,[=]{
        cover->SetAngle(0);
    });

    test = new MyCover(this);
    test->move(0,0);

    buttonAction1 = new QAction("播放",this);
    buttonAction2 = new QAction("从列表中删除",this);

    //初始化菜单
    buttonMenu = new QMenu(this);
    //动作添加到菜单
    buttonMenu->addAction(buttonAction1);
    buttonMenu->addAction(buttonAction2);

    //给动作设置信号槽
    connect(buttonAction1, &QAction::triggered, [=]{
        slotChooseMusic();
        if(!isplay){
            isplay = true;
            cover->isPlay = true;
            StyandRe->isPlay = true;
            Sty->isPlay = true;
            playerlist->setCurrentIndex(rowSelect);
            player->play();
            ui->Bpause->setIcon(QIcon(":/res/pause.png"));
            player->play();
        }

    });
    connect(buttonAction2, &QAction::triggered, this, &MainWindow::slotDeleteSongList);

    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tableWidget,&QPushButton::customContextMenuRequested,[=](const QPoint &pos)
    {
        int rowindex;
        QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
        if(!items.empty()) //表格有某行被选中
        {
            // 获取该行的行号
            rowindex = ui->tableWidget->row(items.at(0));
            rowSelect = rowindex;
        }
        buttonMenu->exec(QCursor::pos());
    });
    lyric_widget->move(200,200);
    lyric_widget->hide();
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
    if(playerlist->currentIndex()<filelist.size()-1 || modeNow == loop || modeNow == shuffle){
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

    lyric_widget->loadLyric(player,MusicPath+"\\"+songName);//显示当前歌曲的歌词
}

void MainWindow::slotPositionChange(qint64 position){
    ui->horizontalSlider->setMaximum(player->duration());
    ui->horizontalSlider->setValue(position);
    ui->label->setText(QString::number(position/60000)+":"+QString::number(position%60000/1000)+"/"+
                       QString::number(player->duration()/60000)+":"+QString::number(player->duration()%60000/1000));
}
void MainWindow::slotSliderChange(){

    int position=ui->horizontalSlider->value();
    player->setPosition(position);
    ui->label->setText(QString::number(position/60000)+":"+QString::number(position%60000/1000)+"/"+
                       QString::number(player->duration()/60000)+":"+QString::number(player->duration()%60000/1000));
}
void MainWindow::slotSliderMove(int position){
    ui->label->setText(QString::number(position/60000)+":"+QString::number(position%60000/1000)+"/"+
                       QString::number(player->duration()/60000)+":"+QString::number(player->duration()%60000/1000));
}
void MainWindow::slotVolumeBtnClicked(){
    if(!isMuted){
        isMuted=true;
        ui->volume_btn->setStyleSheet("QPushButton{border-image: url(:/res/volume_muted.png);}");
        ui->volume_btn->setToolTip("单击关闭静音");
        player->setVolume(0);
        ui->volume_label->setText("0");
        ui->VolumeSlider->setValue(0);
    }
    else{
        isMuted=false;
        ui->volume_btn->setStyleSheet("QPushButton{border-image: url(:/res/volume.png);}");
        ui->volume_btn->setToolTip("单击开启静音");
        player->setVolume(volume);
        ui->volume_label->setText(QString::number(volume));
        ui->VolumeSlider->setValue(volume);
    }
}
void MainWindow::slotVolumeSliderChange(int vol){
    if(isMuted){//被静音则解除静音
        isMuted=false;
        ui->volume_btn->setStyleSheet("QPushButton{border-image: url(:/res/volume.png);}");
        ui->volume_btn->setToolTip("单击开启静音");
    }
    volume=vol;
    ui->VolumeSlider->setValue(vol);
    ui->volume_label->setText(QString::number(vol));
    player->setVolume(vol);
}

void MainWindow::addItem(QString name){
    int count = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(count + 1);

    QTableWidgetItem *itemName = new QTableWidgetItem(name);
    ui->tableWidget->setItem(count,0,itemName);
}

void MainWindow::slotPixShow(){
    QString fileName = filelist.at(playerlist->currentIndex());
    QString LfileName = MusicPath+"\\"+fileName;
    const wchar_t * url = reinterpret_cast<const wchar_t *>(LfileName.utf16());
    int x = mp3.GetPic(url);
    qDebug() << x;
    //这里有问题 如果写成else if(x == 2)cover->Setfilename("music\\test2.jpg");导致jpg文件不显示
    cover->Setfilename("music\\test2.jpg");
    if(x == 3){cover->Setfilename("music\\test3.png");}
    if(x == 1){cover->Setfilename(":/res/OurMusic.png");}
}

void MainWindow::slotCopySong(){
    QStringList path_list = QFileDialog::getOpenFileNames(this, tr("open file"), " ",  tr("MP3文件(*.mp3)"));
    for(int i = 0; i < path_list.size();i++){
        QFileInfo newFile = QFileInfo(path_list.at(i));
        QString dstPath = newFile.fileName();
        QFile::copy(path_list.at(i),"music\\" + dstPath);
        addItem(dstPath);
        filelist.append(dstPath);
        playerlist->addMedia(QUrl::fromLocalFile(MusicPath+"\\"+dstPath));
    }
}

void MainWindow::slotDeleteSongList(){
    int position=ui->horizontalSlider->value();
    double rale = cover->getAngle();
    int index = playerlist->currentIndex();
    if(rowSelect == index || filelist.size() <= 1){
    QMessageBox::information(this,
        "错误提示",
        "歌曲正在播放或者只有一首歌时暂时不支持从列表清除歌曲，请等待版本更新");
        return;
    }
    if(rowSelect < index){
        playerlist->setCurrentIndex(0);
        playerlist->moveMedia(index,rowSelect);
        playerlist->removeMedia(rowSelect + 1);
        filelist.removeAt(rowSelect);
        playerlist->setCurrentIndex(0);
        playerlist->moveMedia(rowSelect,index - 1);
        playerlist->setCurrentIndex(index - 1);
        player->setPosition(position + 570);

    }
    if(rowSelect > index){
        playerlist->removeMedia(rowSelect);
        filelist.removeAt(rowSelect);
    }
    cover->SetAngle(rale);
    player->play();
    //player->setPlaybackRate(qreal(0.5));
    ui->tableWidget->removeRow(rowSelect);
    slotPixShow();

}

void MainWindow::slotChangePlayMode(){
    if(modeNowInt == 3)modeNowInt = -1;
    ++modeNowInt;
    modeNow = (playMode)modeNowInt;
    switch (modeNow) {
    case Sequential:
        playerlist->setPlaybackMode(QMediaPlaylist::Sequential);
        ui->playMode->setIcon(QIcon(":/res/Sequential.svg"));
        ui->playMode->setToolTip("列表播放");
        break;
    case shuffle:
        playerlist->setPlaybackMode(QMediaPlaylist::Random);
        ui->playMode->setIcon(QIcon(":/res/shuffle.png"));
        ui->playMode->setToolTip("随机播放");
        break;
    case currentloop:
        playerlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        ui->playMode->setIcon(QIcon(":/res/currentloop.png"));
        ui->playMode->setToolTip("单曲循环");
        break;
    case loop:
        playerlist->setPlaybackMode(QMediaPlaylist::Loop);
        ui->playMode->setIcon(QIcon(":/res/loop.png"));
        ui->playMode->setToolTip("列表循环");
        break;
    default:
        break;
    }
}

void MainWindow::Cover_init(){
    cover = new Cover(this);
    StyandRe = new StylusandRecord(this);
    Sty = new Stylus(this);

    cover->move(155,140);
    StyandRe->move(80,65);
    Sty->move(80,-150);

    connect(ui->Bpause,&QPushButton::clicked,[=]{
        //m_timer->start(10);
        if(isplay == true){
            cover->isPlay = false;
            StyandRe->isPlay = false;
            Sty->isPlay = false;
        }
        else{
            cover->isPlay = true;
            StyandRe->isPlay = true;
            Sty->isPlay = true;
        }

    });
}

void MainWindow::CovBtn_init(){
    CovBtn = new QPushButton(this);
    CovBtn->setFixedSize(270,270);
    CovBtn->setObjectName("CovBtn");
    CovBtn->setFlat(true);
    CovBtn->setStyleSheet("QPushButton{border:none;background:transparent;}");
    CovBtn->setCursor(Qt::PointingHandCursor);
    CovBtn->move(100,100);
    connect(CovBtn,&QPushButton::clicked,this,&MainWindow::slotChangeCovorLyc);
}

void MainWindow::slotChangeCovorLyc(){
    if(isCov){
        isCov = false;
        Cover_hide();
        lyric_widget->show();
    }
    else{
        isCov = true;
        Cover_show();
        lyric_widget->hide();
    }
}

void MainWindow::Cover_hide(){
    cover->hide();
    StyandRe->hide();
    Sty->hide();
}

void MainWindow::Cover_show(){
    cover->show();
    StyandRe->show();
    Sty->show();
}

