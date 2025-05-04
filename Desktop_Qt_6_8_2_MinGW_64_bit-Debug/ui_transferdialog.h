/********************************************************************************
** Form generated from reading UI file 'transferdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERDIALOG_H
#define UI_TRANSFERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TransferDialog
{
public:
    QLabel *label_11;
    QLabel *label_2;
    QLineEdit *amount_input;
    QPushButton *transfer_confirmation_btn;
    QLabel *label_16;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_17;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *email_input;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *TransferDialog)
    {
        if (TransferDialog->objectName().isEmpty())
            TransferDialog->setObjectName("TransferDialog");
        TransferDialog->resize(539, 407);
        label_11 = new QLabel(TransferDialog);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 150, 131, 91));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_11->setScaledContents(true);
        label_2 = new QLabel(TransferDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 210, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: none;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/transactions_17765304.png")));
        label_2->setScaledContents(true);
        amount_input = new QLineEdit(TransferDialog);
        amount_input->setObjectName("amount_input");
        amount_input->setGeometry(QRect(260, 210, 201, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        amount_input->setFont(font);
        amount_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 700 9pt \"Arial\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
""));
        transfer_confirmation_btn = new QPushButton(TransferDialog);
        transfer_confirmation_btn->setObjectName("transfer_confirmation_btn");
        transfer_confirmation_btn->setGeometry(QRect(310, 310, 91, 24));
        transfer_confirmation_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2b547d;\n"
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
        label_16 = new QLabel(TransferDialog);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 350, 51, 51));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_16->setScaledContents(true);
        label_3 = new QLabel(TransferDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 30, 151, 331));
        label_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:#2b547d;"));
        label_8 = new QLabel(TransferDialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(470, 0, 71, 71));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        label_17 = new QLabel(TransferDialog);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(480, 10, 51, 51));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/wmremove-transformed.png")));
        label_17->setScaledContents(true);
        label_7 = new QLabel(TransferDialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 340, 71, 71));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}"));
        label_4 = new QLabel(TransferDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 30, 351, 331));
        label_4->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:white;"));
        label = new QLabel(TransferDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 40, 211, 71));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:none;\n"
"font: 700 20pt \"Arial\";\n"
"color:#2b547d;}"));
        email_input = new QLineEdit(TransferDialog);
        email_input->setObjectName("email_input");
        email_input->setGeometry(QRect(260, 150, 201, 31));
        email_input->setFont(font);
        email_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 700 9pt \"Arial\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
""));
        label_5 = new QLabel(TransferDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 150, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: none;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/download_4002349.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(TransferDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-10, 0, 561, 411));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(199, 201, 213);\n"
"}"));
        label_6->raise();
        label_4->raise();
        label_8->raise();
        label->raise();
        label_17->raise();
        amount_input->raise();
        transfer_confirmation_btn->raise();
        email_input->raise();
        label_2->raise();
        label_5->raise();
        label_3->raise();
        label_11->raise();
        label_7->raise();
        label_16->raise();

        retranslateUi(TransferDialog);

        QMetaObject::connectSlotsByName(TransferDialog);
    } // setupUi

    void retranslateUi(QDialog *TransferDialog)
    {
        TransferDialog->setWindowTitle(QCoreApplication::translate("TransferDialog", "Dialog", nullptr));
        label_11->setText(QString());
        label_2->setText(QString());
        amount_input->setPlaceholderText(QCoreApplication::translate("TransferDialog", "Enter Amount e.g. 6500", nullptr));
        transfer_confirmation_btn->setText(QCoreApplication::translate("TransferDialog", "Confirm", nullptr));
        label_16->setText(QString());
        label_3->setText(QString());
        label_8->setText(QString());
        label_17->setText(QString());
        label_7->setText(QString());
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("TransferDialog", "Transfer Money", nullptr));
        email_input->setPlaceholderText(QCoreApplication::translate("TransferDialog", "Enter Receiver Email", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransferDialog: public Ui_TransferDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERDIALOG_H
