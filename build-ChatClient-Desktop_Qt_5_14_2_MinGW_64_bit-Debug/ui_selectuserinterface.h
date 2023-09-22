/********************************************************************************
** Form generated from reading UI file 'selectuserinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTUSERINTERFACE_H
#define UI_SELECTUSERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectUserInterface
{
public:
    QLabel *userNameLabel;
    QLabel *userSignLabel;
    QLabel *headLabel;
    QLabel *userLabel;
    QPushButton *user1;
    QPushButton *user2;
    QPushButton *user3;
    QPushButton *user4;
    QPushButton *common_chat;

    void setupUi(QWidget *SelectUserInterface)
    {
        if (SelectUserInterface->objectName().isEmpty())
            SelectUserInterface->setObjectName(QString::fromUtf8("SelectUserInterface"));
        SelectUserInterface->resize(400, 538);
        userNameLabel = new QLabel(SelectUserInterface);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(140, 80, 81, 31));
        userSignLabel = new QLabel(SelectUserInterface);
        userSignLabel->setObjectName(QString::fromUtf8("userSignLabel"));
        userSignLabel->setGeometry(QRect(30, 120, 171, 31));
        headLabel = new QLabel(SelectUserInterface);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        headLabel->setGeometry(QRect(30, 30, 91, 81));
        headLabel->setStyleSheet(QString::fromUtf8(""));
        userLabel = new QLabel(SelectUserInterface);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setGeometry(QRect(140, 170, 111, 31));
        userLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\256\213\344\275\223\";"));
        user1 = new QPushButton(SelectUserInterface);
        user1->setObjectName(QString::fromUtf8("user1"));
        user1->setGeometry(QRect(30, 220, 331, 51));
        user2 = new QPushButton(SelectUserInterface);
        user2->setObjectName(QString::fromUtf8("user2"));
        user2->setGeometry(QRect(30, 280, 331, 51));
        user3 = new QPushButton(SelectUserInterface);
        user3->setObjectName(QString::fromUtf8("user3"));
        user3->setGeometry(QRect(30, 340, 331, 51));
        user4 = new QPushButton(SelectUserInterface);
        user4->setObjectName(QString::fromUtf8("user4"));
        user4->setGeometry(QRect(30, 400, 331, 51));
        common_chat = new QPushButton(SelectUserInterface);
        common_chat->setObjectName(QString::fromUtf8("common_chat"));
        common_chat->setGeometry(QRect(30, 470, 331, 51));

        retranslateUi(SelectUserInterface);

        QMetaObject::connectSlotsByName(SelectUserInterface);
    } // setupUi

    void retranslateUi(QWidget *SelectUserInterface)
    {
        SelectUserInterface->setWindowTitle(QCoreApplication::translate("SelectUserInterface", "Form", nullptr));
        userNameLabel->setText(QString());
        userSignLabel->setText(QString());
        headLabel->setText(QString());
        userLabel->setText(QCoreApplication::translate("SelectUserInterface", "\347\224\250\346\210\267\345\210\227\350\241\250", nullptr));
        user1->setText(QCoreApplication::translate("SelectUserInterface", "12345", nullptr));
        user2->setText(QCoreApplication::translate("SelectUserInterface", "23456", nullptr));
        user3->setText(QCoreApplication::translate("SelectUserInterface", "34567", nullptr));
        user4->setText(QCoreApplication::translate("SelectUserInterface", "45678", nullptr));
        common_chat->setText(QCoreApplication::translate("SelectUserInterface", "\345\217\221\350\265\267\347\276\244\350\201\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectUserInterface: public Ui_SelectUserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTUSERINTERFACE_H
