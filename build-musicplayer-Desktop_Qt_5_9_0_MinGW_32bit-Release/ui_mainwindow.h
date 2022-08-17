/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *currentmusic;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *volume_label;
    QSlider *VolumeSlider;
    QPushButton *volume_btn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QTableWidget *tableWidget;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AddtoList;
    QPushButton *Bmenu;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Blast;
    QSpacerItem *horizontalSpacer;
    QPushButton *Bpause;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Bnext;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *playMode;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(710, 617);
        MainWindow->setMinimumSize(QSize(700, 550));
        MainWindow->setMaximumSize(QSize(1200, 800));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/OurMusic.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        currentmusic = new QLabel(centralWidget);
        currentmusic->setObjectName(QStringLiteral("currentmusic"));
        currentmusic->setGeometry(QRect(90, 390, 338, 71));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentmusic->sizePolicy().hasHeightForWidth());
        currentmusic->setSizePolicy(sizePolicy);
        currentmusic->setMaximumSize(QSize(338, 16777215));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 360, 81, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        volume_label = new QLabel(layoutWidget);
        volume_label->setObjectName(QStringLiteral("volume_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volume_label->sizePolicy().hasHeightForWidth());
        volume_label->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(volume_label, 0, Qt::AlignHCenter);

        VolumeSlider = new QSlider(layoutWidget);
        VolumeSlider->setObjectName(QStringLiteral("VolumeSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(VolumeSlider->sizePolicy().hasHeightForWidth());
        VolumeSlider->setSizePolicy(sizePolicy2);
        VolumeSlider->setCursor(QCursor(Qt::PointingHandCursor));
        VolumeSlider->setMouseTracking(true);
        VolumeSlider->setStyleSheet(QLatin1String("\n"
"\n"
"QSlider::groove:vertical\n"
"{\n"
"	background: #cbcbcb; \n"
"	width: 6px; \n"
"	border-radius: 1px; \n"
"	padding-left:-1px; \n"
"	padding-right:-1px; \n"
"	padding-top:4px; \n"
"	padding-bottom:4px; \n"
"}\n"
"\n"
"QSlider::sub-page:vertical \n"
"{\n"
"	background: #cbcbcb; \n"
"	border-radius: 2px; \n"
"}\n"
"QSlider::add-page:vertical\n"
"{\n"
"	background-color: rgb(90,49,255);\n"
"	width: 10px; \n"
"	border-radius: 2px; \n"
"}\n"
"\n"
"QSlider::handle:vertical\n"
"{ \n"
"	border-color: rgb(0, 255, 255);\n"
"	border-image: url(:/res/sliderbtn.png);				\n"
"	margin: -4px -8px -4px -8px; \n"
"	height: 20px; \n"
"}"));
        VolumeSlider->setMaximum(100);
        VolumeSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(VolumeSlider, 0, Qt::AlignHCenter);

        volume_btn = new QPushButton(layoutWidget);
        volume_btn->setObjectName(QStringLiteral("volume_btn"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volume_btn->sizePolicy().hasHeightForWidth());
        volume_btn->setSizePolicy(sizePolicy3);
        volume_btn->setCursor(QCursor(Qt::PointingHandCursor));
        volume_btn->setStyleSheet(QStringLiteral("QPushButton{border-image: url(:/res/volume.png);}"));
        volume_btn->setFlat(false);

        verticalLayout->addWidget(volume_btn, 0, Qt::AlignHCenter);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 510, 671, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(72, 0));
        label->setMaximumSize(QSize(72, 16777215));

        horizontalLayout_2->addWidget(label);

        horizontalSlider = new QSlider(layoutWidget1);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setStyleSheet(QString::fromUtf8("/*horizontal \357\274\232\346\260\264\345\271\263QSlider*/\n"
"QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"/*1.\346\273\221\345\212\250\350\277\207\347\232\204\346\247\275\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::sub-page:horizontal {\n"
" /*\346\247\275\351\242\234\350\211\262*/\n"
"background: rgb(90,49,255);\n"
" /*\345\244\226\347\216\257\345\214\272\345\237\237\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px;\n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:8px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:8px;\n"
"/*width\345\234\250\350\277\231\351\207\214\346\227\240\346\225\210\357\274\214\344\270\215\345\206\231\345\215\263\345\217\257*/\n"
"}\n"
"\n"
"/*2.\346\234\252\346\273\221\345\212\250\350\277\207\347\232\204\346\247\275\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::add-page:hor"
                        "izontal {\n"
"/*\346\247\275\351\242\234\350\211\262*/\n"
"background: rgb(255,255, 255);\n"
"/*\345\244\226\347\216\257\345\244\247\345\260\2170px\345\260\261\346\230\257\344\270\215\346\230\276\347\244\272\357\274\214\351\273\230\350\256\244\344\271\237\346\230\2570*/\n"
"border: 0px solid #777;\n"
"/*\345\244\226\347\216\257\345\214\272\345\237\237\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px;\n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:9px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:9px;\n"
"}\n"
" \n"
"/*3.\345\271\263\346\227\266\346\273\221\345\212\250\347\232\204\346\273\221\345\235\227\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::handle:horizontal {\n"
"/*\346\273\221\345\235\227\351\242\234\350\211\262*/\n"
"background: rgb(193,204,208);\n"
"/*\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246*/\n"
"width: 5px;\n"
""
                        "/*\346\273\221\345\235\227\345\244\226\347\216\257\344\270\2721px\357\274\214\345\206\215\345\212\240\351\242\234\350\211\262*/\n"
"border: 1px solid rgb(193,204,208);\n"
" /*\346\273\221\345\235\227\345\244\226\347\216\257\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px; \n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:6px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"/*4.\346\211\213\345\212\250\346\213\211\345\212\250\346\227\266\346\230\276\347\244\272\347\232\204\346\273\221\345\235\227\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::handle:horizontal:hover {\n"
"/*\346\273\221\345\235\227\351\242\234\350\211\262*/\n"
"background: rgb(193,204,208);\n"
"/*\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246*/\n"
"width: 10px;\n"
"/*\346\273\221\345\235\227\345\244\226\347\216\257\344\270\2721px\357\274\214\345\206"
                        "\215\345\212\240\351\242\234\350\211\262*/\n"
"border: 1px solid rgb(193,204,208);\n"
" /*\346\273\221\345\235\227\345\244\226\347\216\257\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 5px; \n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:4px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:4px;\n"
"}\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(440, 31, 256, 411));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy4);
        tableWidget->setMinimumSize(QSize(50, 50));
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(480, 470, 155, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        AddtoList = new QPushButton(layoutWidget2);
        AddtoList->setObjectName(QStringLiteral("AddtoList"));
        sizePolicy.setHeightForWidth(AddtoList->sizePolicy().hasHeightForWidth());
        AddtoList->setSizePolicy(sizePolicy);
        AddtoList->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/add-to-list.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddtoList->setIcon(icon1);
        AddtoList->setFlat(true);

        horizontalLayout_3->addWidget(AddtoList);

        Bmenu = new QPushButton(layoutWidget2);
        Bmenu->setObjectName(QStringLiteral("Bmenu"));
        sizePolicy.setHeightForWidth(Bmenu->sizePolicy().hasHeightForWidth());
        Bmenu->setSizePolicy(sizePolicy);
        Bmenu->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Bmenu->setIcon(icon2);
        Bmenu->setFlat(true);

        horizontalLayout_3->addWidget(Bmenu);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 470, 309, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Blast = new QPushButton(widget);
        Blast->setObjectName(QStringLiteral("Blast"));
        Blast->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        Blast->setIcon(icon3);
        Blast->setFlat(true);

        horizontalLayout->addWidget(Blast);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Bpause = new QPushButton(widget);
        Bpause->setObjectName(QStringLiteral("Bpause"));
        Bpause->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bpause->setIcon(icon4);
        Bpause->setFlat(true);

        horizontalLayout->addWidget(Bpause);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Bnext = new QPushButton(widget);
        Bnext->setObjectName(QStringLiteral("Bnext"));
        Bnext->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bnext->setIcon(icon5);
        Bnext->setFlat(true);

        horizontalLayout->addWidget(Bnext);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        playMode = new QPushButton(widget);
        playMode->setObjectName(QStringLiteral("playMode"));
        playMode->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/Sequential.svg"), QSize(), QIcon::Normal, QIcon::Off);
        playMode->setIcon(icon6);
        playMode->setFlat(true);

        horizontalLayout->addWidget(playMode);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 710, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        currentmusic->setText(QString());
        volume_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        volume_btn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\215\225\345\207\273\345\274\200\345\220\257\351\235\231\351\237\263</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volume_btn->setText(QString());
        label->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\220\215\347\247\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddtoList->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\242\236\351\237\263\344\271\220", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddtoList->setText(QString());
#ifndef QT_NO_TOOLTIP
        Bmenu->setToolTip(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Bmenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        Blast->setToolTip(QApplication::translate("MainWindow", "\344\270\212\344\270\200\346\233\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Blast->setText(QString());
#ifndef QT_NO_TOOLTIP
        Bpause->setToolTip(QApplication::translate("MainWindow", "\346\232\202\345\201\234/\346\222\255\346\224\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Bpause->setText(QString());
#ifndef QT_NO_TOOLTIP
        Bnext->setToolTip(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\233\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Bnext->setText(QString());
#ifndef QT_NO_TOOLTIP
        playMode->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\210\227\350\241\250\346\222\255\346\224\276</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        playMode->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
