/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *commit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *name_label_2;
    QLabel *password_label_2;
    QLabel *confirmPassword_label_2;
    QLabel *sign_label_2;
    QLabel *head_label_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *name_line_2;
    QLineEdit *password_line_2;
    QLineEdit *confirmPassword_line_2;
    QLineEdit *sign_line_2;
    QLineEdit *head_line_2;
    QLabel *tip_label;
    QLabel *register_label;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(511, 468);
        commit = new QPushButton(Register);
        commit->setObjectName(QString::fromUtf8("commit"));
        commit->setGeometry(QRect(380, 410, 93, 28));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 80, 441, 301));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        name_label_2 = new QLabel(layoutWidget);
        name_label_2->setObjectName(QString::fromUtf8("name_label_2"));

        verticalLayout_3->addWidget(name_label_2);

        password_label_2 = new QLabel(layoutWidget);
        password_label_2->setObjectName(QString::fromUtf8("password_label_2"));

        verticalLayout_3->addWidget(password_label_2);

        confirmPassword_label_2 = new QLabel(layoutWidget);
        confirmPassword_label_2->setObjectName(QString::fromUtf8("confirmPassword_label_2"));

        verticalLayout_3->addWidget(confirmPassword_label_2);

        sign_label_2 = new QLabel(layoutWidget);
        sign_label_2->setObjectName(QString::fromUtf8("sign_label_2"));

        verticalLayout_3->addWidget(sign_label_2);

        head_label_2 = new QLabel(layoutWidget);
        head_label_2->setObjectName(QString::fromUtf8("head_label_2"));

        verticalLayout_3->addWidget(head_label_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        name_line_2 = new QLineEdit(layoutWidget);
        name_line_2->setObjectName(QString::fromUtf8("name_line_2"));

        verticalLayout_4->addWidget(name_line_2);

        password_line_2 = new QLineEdit(layoutWidget);
        password_line_2->setObjectName(QString::fromUtf8("password_line_2"));

        verticalLayout_4->addWidget(password_line_2);

        confirmPassword_line_2 = new QLineEdit(layoutWidget);
        confirmPassword_line_2->setObjectName(QString::fromUtf8("confirmPassword_line_2"));

        verticalLayout_4->addWidget(confirmPassword_line_2);

        sign_line_2 = new QLineEdit(layoutWidget);
        sign_line_2->setObjectName(QString::fromUtf8("sign_line_2"));

        verticalLayout_4->addWidget(sign_line_2);

        head_line_2 = new QLineEdit(layoutWidget);
        head_line_2->setObjectName(QString::fromUtf8("head_line_2"));

        verticalLayout_4->addWidget(head_line_2);


        horizontalLayout_2->addLayout(verticalLayout_4);

        tip_label = new QLabel(Register);
        tip_label->setObjectName(QString::fromUtf8("tip_label"));
        tip_label->setGeometry(QRect(31, 401, 216, 29));
        register_label = new QLabel(Register);
        register_label->setObjectName(QString::fromUtf8("register_label"));
        register_label->setGeometry(QRect(100, 30, 231, 41));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        commit->setText(QCoreApplication::translate("Register", "\346\217\220\344\272\244", nullptr));
        name_label_2->setText(QCoreApplication::translate("Register", "Name", nullptr));
        password_label_2->setText(QCoreApplication::translate("Register", "Password", nullptr));
        confirmPassword_label_2->setText(QCoreApplication::translate("Register", "Confirm Password ", nullptr));
        sign_label_2->setText(QCoreApplication::translate("Register", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        head_label_2->setText(QCoreApplication::translate("Register", "\345\244\264\345\203\217", nullptr));
        tip_label->setText(QString());
        register_label->setText(QCoreApplication::translate("Register", "              \346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
