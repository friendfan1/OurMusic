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
    QHBoxLayout *horizontalLayout;
    QPushButton *Blast;
    QSpacerItem *horizontalSpacer;
    QPushButton *Bpause;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Bnext;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *volume_label;
    QSlider *VolumeSlider;
    QPushButton *volume_btn;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QPushButton *Bmenu;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 600);
        MainWindow->setMinimumSize(QSize(700, 550));
        MainWindow->setMaximumSize(QSize(1200, 800));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/OurMusic.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        currentmusic = new QLabel(centralWidget);
        currentmusic->setObjectName(QStringLiteral("currentmusic"));
        currentmusic->setGeometry(QRect(110, 420, 291, 17));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentmusic->sizePolicy().hasHeightForWidth());
        currentmusic->setSizePolicy(sizePolicy);
        currentmusic->setMaximumSize(QSize(338, 16777215));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 470, 301, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Blast = new QPushButton(layoutWidget);
        Blast->setObjectName(QStringLiteral("Blast"));
        Blast->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        Blast->setIcon(icon1);
        Blast->setFlat(true);

        horizontalLayout->addWidget(Blast);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Bpause = new QPushButton(layoutWidget);
        Bpause->setObjectName(QStringLiteral("Bpause"));
        Bpause->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bpause->setIcon(icon2);
        Bpause->setFlat(true);

        horizontalLayout->addWidget(Bpause);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Bnext = new QPushButton(layoutWidget);
        Bnext->setObjectName(QStringLiteral("Bnext"));
        Bnext->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bnext->setIcon(icon3);
        Bnext->setFlat(true);

        horizontalLayout->addWidget(Bnext);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 360, 74, 141));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        volume_label = new QLabel(layoutWidget1);
        volume_label->setObjectName(QStringLiteral("volume_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volume_label->sizePolicy().hasHeightForWidth());
        volume_label->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(volume_label, 0, Qt::AlignHCenter);

        VolumeSlider = new QSlider(layoutWidget1);
        VolumeSlider->setObjectName(QStringLiteral("VolumeSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(VolumeSlider->sizePolicy().hasHeightForWidth());
        VolumeSlider->setSizePolicy(sizePolicy2);
        VolumeSlider->setCursor(QCursor(Qt::PointingHandCursor));
        VolumeSlider->setMouseTracking(true);
        VolumeSlider->setMaximum(100);
        VolumeSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(VolumeSlider, 0, Qt::AlignHCenter);

        volume_btn = new QPushButton(layoutWidget1);
        volume_btn->setObjectName(QStringLiteral("volume_btn"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volume_btn->sizePolicy().hasHeightForWidth());
        volume_btn->setSizePolicy(sizePolicy3);
        volume_btn->setCursor(QCursor(Qt::PointingHandCursor));
        volume_btn->setStyleSheet(QStringLiteral("QPushButton{border-image: url(:/res/volume.png);}"));

        verticalLayout->addWidget(volume_btn, 0, Qt::AlignHCenter);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(430, 11, 258, 491));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget2);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy4);
        tableWidget->setMinimumSize(QSize(50, 50));
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidget);

        Bmenu = new QPushButton(layoutWidget2);
        Bmenu->setObjectName(QStringLiteral("Bmenu"));
        sizePolicy.setHeightForWidth(Bmenu->sizePolicy().hasHeightForWidth());
        Bmenu->setSizePolicy(sizePolicy);
        Bmenu->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Bmenu->setIcon(icon4);
        Bmenu->setFlat(true);

        verticalLayout_2->addWidget(Bmenu, 0, Qt::AlignHCenter|Qt::AlignBottom);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 510, 671, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(72, 0));
        label->setMaximumSize(QSize(72, 16777215));

        horizontalLayout_2->addWidget(label);

        horizontalSlider = new QSlider(layoutWidget3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 26));
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
        volume_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        volume_btn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\215\225\345\207\273\345\274\200\345\220\257\351\235\231\351\237\263</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volume_btn->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\220\215\347\247\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Bmenu->setToolTip(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Bmenu->setText(QString());
        label->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
