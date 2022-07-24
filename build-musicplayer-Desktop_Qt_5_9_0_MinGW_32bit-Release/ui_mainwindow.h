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
    QPushButton *Blast;
    QPushButton *Bpause;
    QPushButton *Bnext;
    QTableWidget *tableWidget;
    QPushButton *Bmenu;
    QLabel *currentmusic;
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *volume_btn;
    QSlider *VolumeSlider;
    QLabel *volume_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(688, 593);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Blast = new QPushButton(centralWidget);
        Blast->setObjectName(QStringLiteral("Blast"));
        Blast->setGeometry(QRect(90, 440, 93, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        Blast->setIcon(icon);
        Bpause = new QPushButton(centralWidget);
        Bpause->setObjectName(QStringLiteral("Bpause"));
        Bpause->setGeometry(QRect(240, 440, 93, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bpause->setIcon(icon1);
        Bnext = new QPushButton(centralWidget);
        Bnext->setObjectName(QStringLiteral("Bnext"));
        Bnext->setGeometry(QRect(380, 440, 93, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bnext->setIcon(icon2);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(500, 10, 161, 411));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        Bmenu = new QPushButton(centralWidget);
        Bmenu->setObjectName(QStringLiteral("Bmenu"));
        Bmenu->setGeometry(QRect(530, 440, 93, 28));
        currentmusic = new QLabel(centralWidget);
        currentmusic->setObjectName(QStringLiteral("currentmusic"));
        currentmusic->setGeometry(QRect(100, 410, 351, 16));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(90, 490, 531, 22));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 490, 71, 21));
        volume_btn = new QPushButton(centralWidget);
        volume_btn->setObjectName(QStringLiteral("volume_btn"));
        volume_btn->setGeometry(QRect(20, 440, 35, 33));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(volume_btn->sizePolicy().hasHeightForWidth());
        volume_btn->setSizePolicy(sizePolicy);
        volume_btn->setStyleSheet(QStringLiteral("QPushButton{border-image: url(:/res/volume.png);}"));
        VolumeSlider = new QSlider(centralWidget);
        VolumeSlider->setObjectName(QStringLiteral("VolumeSlider"));
        VolumeSlider->setGeometry(QRect(26, 319, 21, 121));
        VolumeSlider->setMouseTracking(true);
        VolumeSlider->setMaximum(100);
        VolumeSlider->setOrientation(Qt::Vertical);
        volume_label = new QLabel(centralWidget);
        volume_label->setObjectName(QStringLiteral("volume_label"));
        volume_label->setGeometry(QRect(20, 300, 31, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 688, 26));
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
        Blast->setText(QString());
        Bpause->setText(QString());
        Bnext->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\220\215\347\247\260", Q_NULLPTR));
        Bmenu->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\210\227\350\241\250", Q_NULLPTR));
        currentmusic->setText(QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        volume_btn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\215\225\345\207\273\345\274\200\345\220\257\351\235\231\351\237\263</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volume_btn->setText(QString());
        volume_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
