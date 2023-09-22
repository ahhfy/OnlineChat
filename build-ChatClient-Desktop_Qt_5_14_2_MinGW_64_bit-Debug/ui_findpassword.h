/********************************************************************************
** Form generated from reading UI file 'findpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPASSWORD_H
#define UI_FINDPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindPassword
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *account_label;
    QLabel *email_label;
    QLabel *phone_label;
    QLabel *password_label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *accout_line;
    QLineEdit *email_line;
    QLineEdit *phone_line;
    QLineEdit *password_line;
    QPushButton *commit;
    QLabel *head_label;

    void setupUi(QWidget *FindPassword)
    {
        if (FindPassword->objectName().isEmpty())
            FindPassword->setObjectName(QString::fromUtf8("FindPassword"));
        FindPassword->resize(392, 362);
        layoutWidget = new QWidget(FindPassword);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 53, 351, 231));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        account_label = new QLabel(layoutWidget);
        account_label->setObjectName(QString::fromUtf8("account_label"));

        verticalLayout->addWidget(account_label);

        email_label = new QLabel(layoutWidget);
        email_label->setObjectName(QString::fromUtf8("email_label"));

        verticalLayout->addWidget(email_label);

        phone_label = new QLabel(layoutWidget);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));

        verticalLayout->addWidget(phone_label);

        password_label = new QLabel(layoutWidget);
        password_label->setObjectName(QString::fromUtf8("password_label"));

        verticalLayout->addWidget(password_label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        accout_line = new QLineEdit(layoutWidget);
        accout_line->setObjectName(QString::fromUtf8("accout_line"));

        verticalLayout_2->addWidget(accout_line);

        email_line = new QLineEdit(layoutWidget);
        email_line->setObjectName(QString::fromUtf8("email_line"));

        verticalLayout_2->addWidget(email_line);

        phone_line = new QLineEdit(layoutWidget);
        phone_line->setObjectName(QString::fromUtf8("phone_line"));

        verticalLayout_2->addWidget(phone_line);

        password_line = new QLineEdit(layoutWidget);
        password_line->setObjectName(QString::fromUtf8("password_line"));

        verticalLayout_2->addWidget(password_line);


        horizontalLayout->addLayout(verticalLayout_2);

        commit = new QPushButton(FindPassword);
        commit->setObjectName(QString::fromUtf8("commit"));
        commit->setGeometry(QRect(290, 320, 93, 28));
        head_label = new QLabel(FindPassword);
        head_label->setObjectName(QString::fromUtf8("head_label"));
        head_label->setGeometry(QRect(150, 20, 72, 15));

        retranslateUi(FindPassword);

        QMetaObject::connectSlotsByName(FindPassword);
    } // setupUi

    void retranslateUi(QWidget *FindPassword)
    {
        FindPassword->setWindowTitle(QCoreApplication::translate("FindPassword", "Form", nullptr));
        account_label->setText(QCoreApplication::translate("FindPassword", "\350\264\246\345\217\267", nullptr));
        email_label->setText(QCoreApplication::translate("FindPassword", "\347\273\221\345\256\232\347\232\204\351\202\256\347\256\261", nullptr));
        phone_label->setText(QCoreApplication::translate("FindPassword", "\347\273\221\345\256\232\347\232\204\346\211\213\346\234\272", nullptr));
        password_label->setText(QCoreApplication::translate("FindPassword", "\345\257\206\347\240\201", nullptr));
        commit->setText(QCoreApplication::translate("FindPassword", "\346\211\276\345\233\236", nullptr));
        head_label->setText(QCoreApplication::translate("FindPassword", "\346\211\276\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPassword: public Ui_FindPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPASSWORD_H
