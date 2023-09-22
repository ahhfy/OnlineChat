/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QTextEdit *display_screen;
    QTextEdit *message_textEdit;
    QPushButton *startButton;
    QPushButton *close_button;
    QPushButton *send_button;
    QPushButton *clear_button;
    QLabel *tip_Label;
    QPushButton *pushButton;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QString::fromUtf8("Server"));
        Server->resize(800, 600);
        display_screen = new QTextEdit(Server);
        display_screen->setObjectName(QString::fromUtf8("display_screen"));
        display_screen->setGeometry(QRect(40, 40, 721, 291));
        display_screen->setReadOnly(true);
        message_textEdit = new QTextEdit(Server);
        message_textEdit->setObjectName(QString::fromUtf8("message_textEdit"));
        message_textEdit->setGeometry(QRect(40, 370, 721, 91));
        startButton = new QPushButton(Server);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(60, 510, 112, 34));
        close_button = new QPushButton(Server);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(630, 510, 112, 34));
        send_button = new QPushButton(Server);
        send_button->setObjectName(QString::fromUtf8("send_button"));
        send_button->setGeometry(QRect(210, 510, 112, 34));
        clear_button = new QPushButton(Server);
        clear_button->setObjectName(QString::fromUtf8("clear_button"));
        clear_button->setGeometry(QRect(410, 510, 112, 34));
        tip_Label = new QLabel(Server);
        tip_Label->setObjectName(QString::fromUtf8("tip_Label"));
        tip_Label->setGeometry(QRect(620, 570, 144, 18));
        pushButton = new QPushButton(Server);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 560, 112, 34));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        pushButton->setFont(font);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        startButton->setText(QCoreApplication::translate("Server", "StartServer", nullptr));
        close_button->setText(QCoreApplication::translate("Server", "CloseServer", nullptr));
        send_button->setText(QCoreApplication::translate("Server", "Send", nullptr));
        clear_button->setText(QCoreApplication::translate("Server", "Clear", nullptr));
        tip_Label->setText(QCoreApplication::translate("Server", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201\357\274\232\345\205\263\351\227\255", nullptr));
        pushButton->setText(QCoreApplication::translate("Server", "initDB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
