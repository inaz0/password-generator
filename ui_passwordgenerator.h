/********************************************************************************
** Form generated from reading ui file 'passwordgenerator.ui'
**
** Created: Tue Mar 23 20:46:18 2010
**      by: Qt User Interface Compiler version 4.3.4
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PASSWORDGENERATOR_H
#define UI_PASSWORDGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

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
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PasswordGenerator)
    {
    if (PasswordGenerator->objectName().isEmpty())
        PasswordGenerator->setObjectName(QString::fromUtf8("PasswordGenerator"));
    PasswordGenerator->resize(320, 525);
    PasswordGenerator->setMinimumSize(QSize(320, 480));
    PasswordGenerator->setMaximumSize(QSize(320, 540));
    PasswordGenerator->setWindowIcon(QIcon(QString::fromUtf8(":/images/images/icon.png")));
    PasswordGenerator->setStyleSheet(QString::fromUtf8(""));
    actionA_propos = new QAction(PasswordGenerator);
    actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
    centralWidget = new QWidget(PasswordGenerator);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
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
    checkBox->setObjectName(QString::fromUtf8("checkBox"));
    checkBox->setGeometry(QRect(10, 80, 261, 22));
    QFont font;
    font.setFamily(QString::fromUtf8("Bitstream Vera Sans Mono"));
    font.setPointSize(12);
    font.setBold(true);
    font.setItalic(false);
    font.setWeight(75);
    checkBox->setFont(font);
    checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
    checkBox->setChecked(true);
    checkBox_2 = new QCheckBox(centralWidget);
    checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
    checkBox_2->setGeometry(QRect(10, 110, 201, 22));
    checkBox_2->setFont(font);
    checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
    label_2 = new QLabel(centralWidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 180, 271, 17));
    label_2->setFont(font);
    label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
    ValeurTailleMdp = new QLabel(centralWidget);
    ValeurTailleMdp->setObjectName(QString::fromUtf8("ValeurTailleMdp"));
    ValeurTailleMdp->setGeometry(QRect(190, 200, 59, 17));
    ValeurTailleMdp->setFont(font);
    ValeurTailleMdp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
    Resultats = new QLabel(centralWidget);
    Resultats->setObjectName(QString::fromUtf8("Resultats"));
    Resultats->setGeometry(QRect(10, 410, 301, 61));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Bitstream Vera Sans Mono"));
    font1.setPointSize(10);
    font1.setBold(false);
    font1.setItalic(false);
    font1.setWeight(50);
    Resultats->setFont(font1);
    Resultats->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: 10pt \"Bitstream Vera Sans Mono\";"));
    checkBox_3 = new QCheckBox(centralWidget);
    checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
    checkBox_3->setGeometry(QRect(10, 140, 191, 22));
    checkBox_3->setFont(font);
    checkBox_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
    CopierMdp = new QPushButton(centralWidget);
    CopierMdp->setObjectName(QString::fromUtf8("CopierMdp"));
    CopierMdp->setGeometry(QRect(190, 280, 121, 27));
    CopierMdp->setStyleSheet(QString::fromUtf8("background:none;"));
    pushButton = new QPushButton(centralWidget);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(10, 280, 171, 27));
    pushButton->setStyleSheet(QString::fromUtf8("background:none;"));
    TailleMDP = new QSlider(centralWidget);
    TailleMDP->setObjectName(QString::fromUtf8("TailleMDP"));
    TailleMDP->setGeometry(QRect(10, 200, 160, 19));
    QFont font2;
    font2.setKerning(false);
    TailleMDP->setFont(font2);
    TailleMDP->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;"));
    TailleMDP->setMinimum(1);
    TailleMDP->setMaximum(32);
    TailleMDP->setValue(8);
    TailleMDP->setOrientation(Qt::Horizontal);
    Lowercase = new QCheckBox(centralWidget);
    Lowercase->setObjectName(QString::fromUtf8("Lowercase"));
    Lowercase->setGeometry(QRect(10, 50, 241, 22));
    Lowercase->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
"font: bold 12pt \"Bitstream Vera Sans Mono\";"));
    Lowercase->setChecked(true);
    PasswordGenerator->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(PasswordGenerator);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 320, 25));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
    menuBar->setSizePolicy(sizePolicy);
    menuBar->setContextMenuPolicy(Qt::DefaultContextMenu);
    menuBar->setLayoutDirection(Qt::RightToLeft);
    menuBar->setAutoFillBackground(false);
    menuBar->setDefaultUp(true);
    PasswordGenerator->setMenuBar(menuBar);
    statusBar = new QStatusBar(PasswordGenerator);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    PasswordGenerator->setStatusBar(statusBar);

    retranslateUi(PasswordGenerator);
    QObject::connect(TailleMDP, SIGNAL(valueChanged(int)), ValeurTailleMdp, SLOT(setNum(int)));

    QMetaObject::connectSlotsByName(PasswordGenerator);
    } // setupUi

    void retranslateUi(QMainWindow *PasswordGenerator)
    {
    PasswordGenerator->setWindowTitle(QApplication::translate("PasswordGenerator", "PasswordGenerator", 0, QApplication::UnicodeUTF8));
    actionA_propos->setText(QApplication::translate("PasswordGenerator", "A propos", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("PasswordGenerator", "Majuscule", 0, QApplication::UnicodeUTF8));
    checkBox_2->setText(QApplication::translate("PasswordGenerator", "Chiffres", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("PasswordGenerator", "Taille du mot de passe", 0, QApplication::UnicodeUTF8));
    ValeurTailleMdp->setText(QApplication::translate("PasswordGenerator", "8", 0, QApplication::UnicodeUTF8));
    Resultats->setText(QString());
    checkBox_3->setText(QApplication::translate("PasswordGenerator", "M\303\251ta-Caract\303\250res", 0, QApplication::UnicodeUTF8));
    CopierMdp->setText(QApplication::translate("PasswordGenerator", "Copier", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("PasswordGenerator", "G\303\251n\303\251rer le mot de passe", 0, QApplication::UnicodeUTF8));
    Lowercase->setText(QApplication::translate("PasswordGenerator", "Minuscule", 0, QApplication::UnicodeUTF8));
    menuBar->setProperty("h", QVariant(QString()));
    Q_UNUSED(PasswordGenerator);
    } // retranslateUi

};

namespace Ui {
    class PasswordGenerator: public Ui_PasswordGenerator {};
} // namespace Ui

#endif // UI_PASSWORDGENERATOR_H
