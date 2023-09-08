/********************************************************************************
** Form generated from reading UI file 'passwordgenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDGENERATOR_H
#define UI_PASSWORDGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordGenerator
{
public:
    QAction *actionA_propos;
    QWidget *centralWidget;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QLabel *ValeurTailleMdp;
    QLabel *Resultats;
    QCheckBox *checkBox_3;
    QPushButton *CopierMdp;
    QPushButton *pushButton;
    QSlider *TailleMDP;
    QCheckBox *Lowercase;
    QCheckBox *checkBox_4;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *PasswordGenerator)
    {
        if (PasswordGenerator->objectName().isEmpty())
            PasswordGenerator->setObjectName("PasswordGenerator");
        PasswordGenerator->resize(320, 523);
        PasswordGenerator->setMinimumSize(QSize(320, 480));
        PasswordGenerator->setMaximumSize(QSize(320, 540));
        QIcon icon;
        icon.addFile(QString::fromUtf8("ui/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        PasswordGenerator->setWindowIcon(icon);
        PasswordGenerator->setStyleSheet(QString::fromUtf8(""));
        actionA_propos = new QAction(PasswordGenerator);
        actionA_propos->setObjectName("actionA_propos");
        centralWidget = new QWidget(PasswordGenerator);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        centralWidget->setMinimumSize(QSize(320, 480));
        centralWidget->setMaximumSize(QSize(320, 480));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-image: url(:/images/images/fond.png);\n"
"background-repeat:no-repeat;\n"
"}"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 80, 261, 22));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bitstream Vera Sans Mono")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(10, 110, 201, 22));
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 210, 271, 17));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
        ValeurTailleMdp = new QLabel(centralWidget);
        ValeurTailleMdp->setObjectName("ValeurTailleMdp");
        ValeurTailleMdp->setGeometry(QRect(190, 230, 59, 17));
        ValeurTailleMdp->setFont(font);
        ValeurTailleMdp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
        Resultats = new QLabel(centralWidget);
        Resultats->setObjectName("Resultats");
        Resultats->setGeometry(QRect(10, 410, 301, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bitstream Vera Sans Mono")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        Resultats->setFont(font1);
        Resultats->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: 10pt \"Bitstream Vera Sans Mono\";"));
        Resultats->setWordWrap(true);
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(10, 140, 291, 22));
        checkBox_3->setFont(font);
        checkBox_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
        checkBox_3->setChecked(true);
        CopierMdp = new QPushButton(centralWidget);
        CopierMdp->setObjectName("CopierMdp");
        CopierMdp->setGeometry(QRect(190, 280, 121, 27));
        CopierMdp->setStyleSheet(QString::fromUtf8("background:none;"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 280, 171, 27));
        pushButton->setStyleSheet(QString::fromUtf8("background:none;"));
        TailleMDP = new QSlider(centralWidget);
        TailleMDP->setObjectName("TailleMDP");
        TailleMDP->setGeometry(QRect(10, 230, 160, 19));
        QFont font2;
        font2.setKerning(false);
        TailleMDP->setFont(font2);
        TailleMDP->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;"));
        TailleMDP->setMinimum(4);
        TailleMDP->setMaximum(128);
        TailleMDP->setValue(12);
        TailleMDP->setOrientation(Qt::Horizontal);
        Lowercase = new QCheckBox(centralWidget);
        Lowercase->setObjectName("Lowercase");
        Lowercase->setGeometry(QRect(10, 50, 241, 22));
        Lowercase->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
        Lowercase->setChecked(true);
        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(10, 170, 281, 22));
        checkBox_4->setFont(font);
        checkBox_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";text-shadow: 1px 1px 2px black;"));
        PasswordGenerator->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PasswordGenerator);
        statusBar->setObjectName("statusBar");
        PasswordGenerator->setStatusBar(statusBar);
        toolBar = new QToolBar(PasswordGenerator);
        toolBar->setObjectName("toolBar");
        PasswordGenerator->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionA_propos);

        retranslateUi(PasswordGenerator);
        QSlider::connect(TailleMDP, &QSlider::valueChanged, ValeurTailleMdp, QOverload<int>::of(&QLabel::setNum));

        QMetaObject::connectSlotsByName(PasswordGenerator);
    } // setupUi

    void retranslateUi(QMainWindow *PasswordGenerator)
    {
        PasswordGenerator->setWindowTitle(QCoreApplication::translate("PasswordGenerator", "PasswordGenerator", nullptr));
        actionA_propos->setText(QCoreApplication::translate("PasswordGenerator", "A propos", nullptr));
        checkBox->setText(QCoreApplication::translate("PasswordGenerator", "Majuscule", nullptr));
        checkBox_2->setText(QCoreApplication::translate("PasswordGenerator", "Chiffres", nullptr));
        label_2->setText(QCoreApplication::translate("PasswordGenerator", "Taille du mot de passe", nullptr));
        ValeurTailleMdp->setText(QCoreApplication::translate("PasswordGenerator", "12", nullptr));
        Resultats->setText(QString());
        checkBox_3->setText(QCoreApplication::translate("PasswordGenerator", "M\303\251ta-Caract\303\250res (simples)", nullptr));
        CopierMdp->setText(QCoreApplication::translate("PasswordGenerator", "Copier", nullptr));
        pushButton->setText(QCoreApplication::translate("PasswordGenerator", "G\303\251n\303\251rer le mot de passe", nullptr));
        Lowercase->setText(QCoreApplication::translate("PasswordGenerator", "Minuscule", nullptr));
        checkBox_4->setText(QCoreApplication::translate("PasswordGenerator", "M\303\251ta-Caract\303\250res (avanc\303\251es)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("PasswordGenerator", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordGenerator: public Ui_PasswordGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDGENERATOR_H
