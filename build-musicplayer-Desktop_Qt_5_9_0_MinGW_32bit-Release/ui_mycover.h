/********************************************************************************
** Form generated from reading UI file 'mycover.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCOVER_H
#define UI_MYCOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCover
{
public:

    void setupUi(QWidget *MyCover)
    {
        if (MyCover->objectName().isEmpty())
            MyCover->setObjectName(QStringLiteral("MyCover"));
        MyCover->resize(16, 16);

        retranslateUi(MyCover);

        QMetaObject::connectSlotsByName(MyCover);
    } // setupUi

    void retranslateUi(QWidget *MyCover)
    {
        MyCover->setWindowTitle(QApplication::translate("MyCover", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyCover: public Ui_MyCover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOVER_H
