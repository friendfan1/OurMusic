#include"mp3header.h"

MP3Header::MP3Header(){

}

bool MP3Header::isFrameAPIC(const char* cID3V2Fra_head)
{
    // 判断
    if ((strncmp(cID3V2Fra_head, "APIC", 4) == 0) ||
        (strncmp(cID3V2Fra_head, "apic", 4) == 0))
        return true;
    return false;
}

int MP3Header::calcID3V2Len(const char* cID3V2_head)
{
    int len = ((cID3V2_head[6] & 0x7f) << 21)
                | ((cID3V2_head[7] & 0x7f) << 14)
                | ((cID3V2_head[8] & 0x7f) << 7)
                | (cID3V2_head[9] & 0x7f);
    return len;
}

int MP3Header::calclID3V2FraLength(const char* cID3V2Fra_head)
{
    int len = (int)(cID3V2Fra_head[4] * 0x1000000 +
            cID3V2Fra_head[5] * 0x10000 +
            cID3V2Fra_head[6] * 0x100 +
            cID3V2Fra_head[7]);
    return len;
}

bool MP3Header::isJPEG(const char* data)
{
    // JPEG格式数据的起始为0xFFD8
    if (((unsigned char)data[0] == 0xFF) &&
        ((unsigned char)data[1] == 0xD8))
        return true;
    return false;
}
bool MP3Header::isPNG(const char* data){
    // PNG格式数据的起始为0x8950
    if (((unsigned char)data[0] == 0x89) &&
        ((unsigned char)data[1] == 0x50))
        return true;
    return false;
}


int MP3Header::GetPic(const wchar_t *path)
{
    m_url = QString::fromWCharArray(path);
    fp = _wfopen(path,L"rb");
    if (NULL==fp)
    {
     printf("open read file error!!");
     return -1;
    }
    fread(cID3V2_head, 10, 1, fp);
    if ((cID3V2_head[0] == 'I' || cID3V2_head[0] == 'i') &&
        (cID3V2_head[1] == 'D' || cID3V2_head[1] == 'd') &&
        cID3V2_head[2] == '3')
    {
            // 获取ID3V2标签的长度
            ID3V2_len = calcID3V2Len(cID3V2_head);
    }

    bool hasAPIC = false;


    while ((ftell(fp) + 10) <= ID3V2_len)
    {
        // 这里每个帧标识的长度也为10，由于每个帧标识的存储的数据的长度不一
        // 每次要读取出来，进行运算获取真正数据长度
        memset(cID3V2Fra_head, 0, 10);
        fread(cID3V2Fra_head, 10, 1, fp);
        lID3V2Fra_length = ((unsigned char)cID3V2Fra_head[4] * 0x1000000 +
            (unsigned char)cID3V2Fra_head[5] * 0x10000 +
            (unsigned char)cID3V2Fra_head[6] * 0x100 +
            (unsigned char)cID3V2Fra_head[7]);

        // 这里判断是否为专辑图片的帧标识
        if (isFrameAPIC(cID3V2Fra_head))
        {
            cID3V2Fra = (char*)calloc(lID3V2Fra_length, 1);
            if (cID3V2Fra != NULL)
            {
                hasAPIC = true;
                fread(cID3V2Fra, lID3V2Fra_length, 1, fp);
            }

            break;
        }
        else
        {
            // 移动到下一帧标识
            fseek(fp, lID3V2Fra_length, SEEK_CUR);
        }
    }




    fclose(fp);

    if (hasAPIC)
        {

            QString s_filename = m_url.left(m_url.size() - 4);
            //判断是否是JEPG
            bool isJPG;
            // 这里整个数据的前面一部分数据是用来记录专辑图片的格式
            // 例如 image/jpeg image/png等，这里大部分的专辑图片都是jpeg的
            int start = 0;
            while (start < lID3V2Fra_length)
            {
                if (isJPEG(cID3V2Fra + start)){
                    isJPG = true;
                    break;
                }
                if(isPNG(cID3V2Fra + start)){
                    isJPG = false;
                    break;
                }
                ++start;
            }

            //是以JPEG格式存在，则存储为jpeg的文件
            qDebug() << lID3V2Fra_length;
            if (start != lID3V2Fra_length)
            {

                if(isJPG == 1){
                    s_filename += ".jpg";
//                    char* program_char = s_filename.toLatin1().data();
                    FILE* jpegFP = fopen("music\\test2.jpg", "wb");
                    fwrite(cID3V2Fra + start, lID3V2Fra_length - start, 1, jpegFP);
                    fclose(jpegFP);
                    return 2;
                }
                else{
                    s_filename += ".png";
                    //char* program_char = s_filename.toLatin1().data();
                    //qDebug() << program_char;
                    FILE* pngFP = fopen("music\\test3.png", "wb");
                    fwrite(cID3V2Fra + start, lID3V2Fra_length , 1, pngFP);
                    fclose(pngFP);
                    return 3;
                }
            }
        }
    return 1;
}


