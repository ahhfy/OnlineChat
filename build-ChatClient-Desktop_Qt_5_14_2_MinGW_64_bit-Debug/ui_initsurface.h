/********************************************************************************
** Form generated from reading UI file 'initsurface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITSURFACE_H
#define UI_INITSURFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitSurface
{
public:

    void setupUi(QWidget *InitSurface)
    {
        if (InitSurface->objectName().isEmpty())
            InitSurface->setObjectName(QString::fromUtf8("InitSurface"));
        InitSurface->resize(400, 300);

        retranslateUi(InitSurface);

        QMetaObject::connectSlotsByName(InitSurface);
    } // setupUi

    void retranslateUi(QWidget *InitSurface)
    {
        InitSurface->setWindowTitle(QCoreApplication::translate("InitSurface", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitSurface: public Ui_InitSurface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITSURFACE_H
