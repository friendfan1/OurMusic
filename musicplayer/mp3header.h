#ifndef MP3TAGLIB_H
#define MP3TAGLIB_H

#include <QMainWindow>
#include "stdlib.h"
#include "stdio.h"
#include <QDebug>
#include <QImage>
#include <QMap>
#include <QTextCodec>
#include <QString>
#include <QFile>
#include <QUrl>
#include<QDir>
#include"config.h"

class MP3Header
{
public:
    MP3Header();
    FILE *fp;
    QString m_url;
    char  cID3V2_head[10] = {0}, cID3V2Fra_head[10] = {0};//存放标签以及帧标签
    long  ID3V2_len = 0, lID3V2Fra_length = 0;//标签长度以及帧标签长度
    char* cID3V2Fra = NULL;
    bool hasAPIC;//是否APIC的标识
    //获取图片信息
    int GetPic(const wchar_t *path);
    //判断是否APIC
    bool isFrameAPIC(const char* cID3V2Fra_head);
    //获取标签长度
    int calcID3V2Len(const char* cID3V2_head);
    int calclID3V2FraLength(const char* cID3V2Fra_head);
    //判断是否是JPEG、PNG
    bool isJPEG(const char* data);
    bool isPNG(const char* data);
};


#endif // MP3TAGLIB_H

