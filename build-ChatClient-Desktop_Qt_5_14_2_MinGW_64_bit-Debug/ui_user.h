/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *headLabel;
    QLabel *userNameLabel;
    QLabel *userSignLabel;
    QTextEdit *chatEidt;
    QPushButton *sendButton;
    QLineEdit *sendMsgLine;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(556, 495);
        headLabel = new QLabel(User);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        headLabel->setGeometry(QRect(40, 30, 91, 81));
        headLabel->setStyleSheet(QString::fromUtf8(""));
        userNameLabel = new QLabel(User);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(150, 80, 81, 31));
        userSignLabel = new QLabel(User);
        userSignLabel->setObjectName(QString::fromUtf8("userSignLabel"));
        userSignLabel->setGeometry(QRect(40, 120, 171, 31));
        chatEidt = new QTextEdit(User);
        chatEidt->setObjectName(QString::fromUtf8("chatEidt"));
        chatEidt->setGeometry(QRect(30, 160, 491, 251));
        chatEidt->setReadOnly(true);
        sendButton = new QPushButton(User);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(440, 430, 81, 34));
        sendMsgLine = new QLineEdit(User);
        sendMsgLine->setObjectName(QString::fromUtf8("sendMsgLine"));
        sendMsgLine->setGeometry(QRect(30, 430, 391, 31));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Form", nullptr));
        headLabel->setText(QString());
        userNameLabel->setText(QString());
        userSignLabel->setText(QString());
        sendButton->setText(QCoreApplication::translate("User", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
