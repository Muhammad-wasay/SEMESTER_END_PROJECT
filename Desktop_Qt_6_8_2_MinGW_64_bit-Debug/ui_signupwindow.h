/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signupwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QPushButton *backbtn;
    QLabel *label_4;
    QLineEdit *username;
    QLineEdit *accountnumber;
    QLineEdit *confirmpassword;
    QLineEdit *password;
    QLineEdit *email;
    QLineEdit *initialbalance;
    QComboBox *acctype;
    QPushButton *createbtn;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signupwindow)
    {
        if (signupwindow->objectName().isEmpty())
            signupwindow->setObjectName("signupwindow");
        signupwindow->resize(618, 456);
        centralwidget = new QWidget(signupwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-4, -9, 701, 441));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background:qlineargradient(x1:1,y1:0,x2:0,y2:1,stop:0#0b2f3b,stop:1#38aacf);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 20, 401, 351));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"}\n"
""));
        backbtn = new QPushButton(centralwidget);
        backbtn->setObjectName("backbtn");
        backbtn->setGeometry(QRect(230, 330, 81, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        backbtn->setFont(font1);
        backbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 9pt \"Microsoft Sans Serif\";\n"
"background-color:#3499db;\n"
"color:white;\n"
"border-radius:10px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 30, 161, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"font: 700 20pt \"Arial\";\n"
"color:BLACK;}"));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(300, 110, 211, 31));
        username->setFont(font);
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        accountnumber = new QLineEdit(centralwidget);
        accountnumber->setObjectName("accountnumber");
        accountnumber->setGeometry(QRect(300, 220, 211, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        accountnumber->setFont(font2);
        accountnumber->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 11pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        confirmpassword = new QLineEdit(centralwidget);
        confirmpassword->setObjectName("confirmpassword");
        confirmpassword->setGeometry(QRect(300, 270, 211, 31));
        confirmpassword->setFont(font2);
        confirmpassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 11pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        confirmpassword->setEchoMode(QLineEdit::EchoMode::Password);
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(300, 230, 211, 31));
        password->setFont(font2);
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 11pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        password->setEchoMode(QLineEdit::EchoMode::Password);
        email = new QLineEdit(centralwidget);
        email->setObjectName("email");
        email->setGeometry(QRect(300, 150, 211, 31));
        email->setFont(font2);
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 11pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        initialbalance = new QLineEdit(centralwidget);
        initialbalance->setObjectName("initialbalance");
        initialbalance->setGeometry(QRect(300, 190, 211, 31));
        initialbalance->setFont(font2);
        initialbalance->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 11pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        acctype = new QComboBox(centralwidget);
        acctype->addItem(QString());
        acctype->addItem(QString());
        acctype->setObjectName("acctype");
        acctype->setGeometry(QRect(300, 60, 211, 31));
        acctype->setFont(font2);
        acctype->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft Sans Serif\";"));
        createbtn = new QPushButton(centralwidget);
        createbtn->setObjectName("createbtn");
        createbtn->setGeometry(QRect(420, 320, 141, 31));
        createbtn->setFont(font1);
        createbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 9pt \"Microsoft Sans Serif\";\n"
"background-color:BLACK;\n"
"color:white;\n"
"border-radius:10px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:grey;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:grey;\n"
"}"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(580, 380, 31, 31));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_13->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 120, 21, 21));
        label_5->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_username_icon.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 160, 21, 21));
        label_6->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_email_icon.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 230, 20, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_password_icon.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 240, 21, 21));
        label_8->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_confirm_pass_icon.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 200, 21, 21));
        label_9->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_balance_icon.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 280, 20, 21));
        label_10->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/person_16282718.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 20, 161, 351));
        label_11->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/create your account & Start Saving Today!.png")));
        label_11->setScaledContents(true);
        signupwindow->setCentralWidget(centralwidget);
        label_7->raise();
        accountnumber->raise();
        label->raise();
        label_3->raise();
        backbtn->raise();
        label_4->raise();
        username->raise();
        confirmpassword->raise();
        password->raise();
        email->raise();
        initialbalance->raise();
        acctype->raise();
        createbtn->raise();
        label_13->raise();
        label_5->raise();
        label_6->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        menubar = new QMenuBar(signupwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 618, 18));
        signupwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(signupwindow);
        statusbar->setObjectName("statusbar");
        signupwindow->setStatusBar(statusbar);

        retranslateUi(signupwindow);

        QMetaObject::connectSlotsByName(signupwindow);
    } // setupUi

    void retranslateUi(QMainWindow *signupwindow)
    {
        signupwindow->setWindowTitle(QCoreApplication::translate("signupwindow", "MainWindow", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        backbtn->setText(QCoreApplication::translate("signupwindow", "back", nullptr));
        label_4->setText(QCoreApplication::translate("signupwindow", "SIGN UP", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("signupwindow", "Username", nullptr));
        accountnumber->setText(QString());
        accountnumber->setPlaceholderText(QCoreApplication::translate("signupwindow", "Account Number", nullptr));
        confirmpassword->setText(QString());
        confirmpassword->setPlaceholderText(QCoreApplication::translate("signupwindow", "Confirm Password", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("signupwindow", "Password", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("signupwindow", "Email", nullptr));
        initialbalance->setText(QString());
        initialbalance->setPlaceholderText(QCoreApplication::translate("signupwindow", "Initial Balance", nullptr));
        acctype->setItemText(0, QCoreApplication::translate("signupwindow", "Saving Account", nullptr));
        acctype->setItemText(1, QCoreApplication::translate("signupwindow", "Checking Account", nullptr));

        createbtn->setText(QCoreApplication::translate("signupwindow", "create account", nullptr));
        label_13->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signupwindow: public Ui_signupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
