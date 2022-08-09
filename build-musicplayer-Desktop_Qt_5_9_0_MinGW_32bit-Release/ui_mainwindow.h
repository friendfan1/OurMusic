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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Bmenu;
    QPushButton *Blast;
    QPushButton *volume_btn;
    QPushButton *Bnext;
    QPushButton *Bpause;
    QSlider *VolumeSlider;
    QLabel *label;
    QLabel *volume_label;
    QSlider *horizontalSlider;
    QTableWidget *tableWidget;
    QLabel *currentmusic;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 600);
        MainWindow->setMinimumSize(QSize(700, 600));
        MainWindow->setMaximumSize(QSize(1200, 800));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Bmenu = new QPushButton(centralWidget);
        Bmenu->setObjectName(QStringLiteral("Bmenu"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Bmenu->sizePolicy().hasHeightForWidth());
        Bmenu->setSizePolicy(sizePolicy);
        Bmenu->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(Bmenu, 3, 4, 1, 1);

        Blast = new QPushButton(centralWidget);
        Blast->setObjectName(QStringLiteral("Blast"));
        Blast->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        Blast->setIcon(icon);

        gridLayout->addWidget(Blast, 3, 1, 1, 1);

        volume_btn = new QPushButton(centralWidget);
        volume_btn->setObjectName(QStringLiteral("volume_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volume_btn->sizePolicy().hasHeightForWidth());
        volume_btn->setSizePolicy(sizePolicy1);
        volume_btn->setCursor(QCursor(Qt::PointingHandCursor));
        volume_btn->setStyleSheet(QStringLiteral("QPushButton{border-image: url(:/res/volume.png);}"));

        gridLayout->addWidget(volume_btn, 3, 0, 1, 1);

        Bnext = new QPushButton(centralWidget);
        Bnext->setObjectName(QStringLiteral("Bnext"));
        Bnext->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bnext->setIcon(icon1);

        gridLayout->addWidget(Bnext, 3, 3, 1, 1);

        Bpause = new QPushButton(centralWidget);
        Bpause->setObjectName(QStringLiteral("Bpause"));
        Bpause->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bpause->setIcon(icon2);

        gridLayout->addWidget(Bpause, 3, 2, 1, 1);

        VolumeSlider = new QSlider(centralWidget);
        VolumeSlider->setObjectName(QStringLiteral("VolumeSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(VolumeSlider->sizePolicy().hasHeightForWidth());
        VolumeSlider->setSizePolicy(sizePolicy2);
        VolumeSlider->setCursor(QCursor(Qt::OpenHandCursor));
        VolumeSlider->setMouseTracking(true);
        VolumeSlider->setMaximum(100);
        VolumeSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(VolumeSlider, 2, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(72, 0));
        label->setMaximumSize(QSize(72, 16777215));

        gridLayout->addWidget(label, 4, 0, 1, 1, Qt::AlignRight);

        volume_label = new QLabel(centralWidget);
        volume_label->setObjectName(QStringLiteral("volume_label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volume_label->sizePolicy().hasHeightForWidth());
        volume_label->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(volume_label, 1, 0, 1, 1);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::OpenHandCursor));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 4, 1, 1, 4);

        tableWidget = new QTableWidget(centralWidget);
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

        gridLayout->addWidget(tableWidget, 0, 4, 3, 1);

        currentmusic = new QLabel(centralWidget);
        currentmusic->setObjectName(QStringLiteral("currentmusic"));
        currentmusic->setMaximumSize(QSize(336, 16777215));

        gridLayout->addWidget(currentmusic, 2, 1, 1, 3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Bmenu->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\210\227\350\241\250", Q_NULLPTR));
        Blast->setText(QString());
#ifndef QT_NO_TOOLTIP
        volume_btn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\215\225\345\207\273\345\274\200\345\220\257\351\235\231\351\237\263</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volume_btn->setText(QString());
        Bnext->setText(QString());
        Bpause->setText(QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        volume_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\220\215\347\247\260", Q_NULLPTR));
        currentmusic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
