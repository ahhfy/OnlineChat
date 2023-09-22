/********************************************************************************
** Form generated from reading UI file 'publicchat.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLICCHAT_H
#define UI_PUBLICCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PublicChat
{
public:
    QTextEdit *chatDisplay;
    QPushButton *sendButton;
    QLineEdit *sendMsgLine;
    QTextEdit *currentPeople;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *headLabel;
    QLabel *userNameLabel;

    void setupUi(QWidget *PublicChat)
    {
        if (PublicChat->objectName().isEmpty())
            PublicChat->setObjectName(QString::fromUtf8("PublicChat"));
        PublicChat->resize(674, 562);
        chatDisplay = new QTextEdit(PublicChat);
        chatDisplay->setObjectName(QString::fromUtf8("chatDisplay"));
        chatDisplay->setGeometry(QRect(20, 140, 521, 321));
        chatDisplay->setReadOnly(true);
        sendButton = new QPushButton(PublicChat);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(480, 500, 61, 31));
        sendMsgLine = new QLineEdit(PublicChat);
        sendMsgLine->setObjectName(QString::fromUtf8("sendMsgLine"));
        sendMsgLine->setGeometry(QRect(20, 500, 441, 31));
        currentPeople = new QTextEdit(PublicChat);
        currentPeople->setObjectName(QString::fromUtf8("currentPeople"));
        currentPeople->setGeometry(QRect(550, 140, 107, 321));
        currentPeople->setReadOnly(true);
        label = new QLabel(PublicChat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 50, 91, 51));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        label_2 = new QLabel(PublicChat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 110, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_3 = new QLabel(PublicChat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(550, 110, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        headLabel = new QLabel(PublicChat);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        headLabel->setGeometry(QRect(40, 30, 71, 71));
        userNameLabel = new QLabel(PublicChat);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(140, 70, 81, 31));

        retranslateUi(PublicChat);

        QMetaObject::connectSlotsByName(PublicChat);
    } // setupUi

    void retranslateUi(QWidget *PublicChat)
    {
        PublicChat->setWindowTitle(QCoreApplication::translate("PublicChat", "Form", nullptr));
        sendButton->setText(QCoreApplication::translate("PublicChat", "\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("PublicChat", "\347\276\244\350\201\212", nullptr));
        label_2->setText(QCoreApplication::translate("PublicChat", "\345\257\271\350\257\235\346\241\206", nullptr));
        label_3->setText(QCoreApplication::translate("PublicChat", "\345\234\250\347\272\277\347\224\250\346\210\267", nullptr));
        headLabel->setText(QString());
        userNameLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PublicChat: public Ui_PublicChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLICCHAT_H
