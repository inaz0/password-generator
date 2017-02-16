#include "passwordgenerator.h"
#include "ui_passwordgenerator.h"
#include <QSize>
#include <QTextBrowser>
#include <QIcon>
#include <QWidget>
#include <qdatetime.h>

PasswordGenerator::PasswordGenerator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordGenerator)
{
    ui->setupUi(this);


  /*  QMenuBar *menuFichier = menuBar();

    QAction *actionQuitter = new QAction("A propos", this);
    menuFichier->addAction(actionQuitter);


    connect(actionQuitter, SIGNAL(triggered()), this, SLOT(on_ActionMenu_triggered()));
*/
    QStatusBar *barreEtat = statusBar();
    barreEtat->showMessage("(c) 2017 Alexandre J. | www.kanjian.fr");

}

PasswordGenerator::~PasswordGenerator()
{
    delete ui;
}

void PasswordGenerator::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void PasswordGenerator::on_ActionMenu_triggered(){

    QWidget *Fen = new QWidget;
    QRect r1( QPoint(0,0), QSize(330,380) );
    QRect r2( QPoint(100,200), QSize(330,380) );

    Fen->setWindowTitle("A propos de Password Generator");
    Fen->setWindowIcon(QIcon("images/icon.png"));

    QTextBrowser *RichTextIn = new QTextBrowser(Fen);


    RichTextIn->setHtml("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"><html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\"><table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\"><tr><td style=\"border: none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Password Generator</span></p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Version : 1.2</p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ann&#233;e de version : 2010</p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Auteurs : Bishamonten Technologies</p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.bsmt.fr\"><span style=\" text-decoration: underline; color:#0000ff;\">www.bsmt.fr</span></a> | <a href=\"http://www.kanjian.fr\"><span style=\" text-decoration: underline; color:#0000ff;\">www.kanjian.fr</span></a></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Licence : GPL V3.0</p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Licences</span> : </p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Usage priv&#233; : gratuit</p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Usage professionnel : se rendre sur <a href=\"http://kanjian.fr\"><span style=\" text-decoration: underline; color:#0000ff;\">kanjian.fr</span></a></p></td></tr></table></body></html>");

    Fen->setGeometry(r2);
    RichTextIn->setGeometry(r1);
    Fen->show();

    QStatusBar *barreEtat = statusBar();
    barreEtat->showMessage("(c) 2010 Bishamonten Technologies | www.bsmt.fr");
}

void PasswordGenerator::on_pushButton_clicked()
{
    QList<QString> ListeCaractere;

    int HaveCheckbox = 0;

       if( ui->Lowercase->isChecked() ){

           HaveCheckbox = 1;

           ListeCaractere.append("a");
           ListeCaractere.append("b");
           ListeCaractere.append("c");
           ListeCaractere.append("d");
           ListeCaractere.append("e");
           ListeCaractere.append("f");
           ListeCaractere.append("g");
           ListeCaractere.append("h");
           ListeCaractere.append("i");
           ListeCaractere.append("j");
           ListeCaractere.append("k");
           ListeCaractere.append("l");
           ListeCaractere.append("m");
           ListeCaractere.append("n");
           ListeCaractere.append("o");
           ListeCaractere.append("p");
           ListeCaractere.append("q");
           ListeCaractere.append("r");
           ListeCaractere.append("s");
           ListeCaractere.append("t");
           ListeCaractere.append("u");
           ListeCaractere.append("v");
           ListeCaractere.append("w");
           ListeCaractere.append("x");
           ListeCaractere.append("y");
           ListeCaractere.append("z");
       }

       if( ui->checkBox->isChecked() ){

           HaveCheckbox = 1;

           ListeCaractere.append("A");
           ListeCaractere.append("B");
           ListeCaractere.append("C");
           ListeCaractere.append("D");
           ListeCaractere.append("E");
           ListeCaractere.append("F");
           ListeCaractere.append("G");
           ListeCaractere.append("H");
           ListeCaractere.append("I");
           ListeCaractere.append("J");
           ListeCaractere.append("K");
           ListeCaractere.append("L");
           ListeCaractere.append("M");
           ListeCaractere.append("N");
           ListeCaractere.append("O");
           ListeCaractere.append("P");
           ListeCaractere.append("Q");
           ListeCaractere.append("R");
           ListeCaractere.append("S");
           ListeCaractere.append("T");
           ListeCaractere.append("U");
           ListeCaractere.append("V");
           ListeCaractere.append("W");
           ListeCaractere.append("X");
           ListeCaractere.append("Y");
           ListeCaractere.append("Z");
       }

       if( ui->checkBox_2->isChecked() ){

           HaveCheckbox = 1;

           ListeCaractere.append("0");
           ListeCaractere.append("1");
           ListeCaractere.append("2");
           ListeCaractere.append("3");
           ListeCaractere.append("4");
           ListeCaractere.append("5");
           ListeCaractere.append("6");
           ListeCaractere.append("7");
           ListeCaractere.append("8");
           ListeCaractere.append("9");
       }

       if( ui->checkBox_3->isChecked() ){

           HaveCheckbox = 1;

           ListeCaractere.append("@");
           ListeCaractere.append(")");
           ListeCaractere.append("]");
           ListeCaractere.append("=");
           ListeCaractere.append("+");
           ListeCaractere.append("*");
           ListeCaractere.append("$");
           ListeCaractere.append("£");
           ListeCaractere.append("^");
           ListeCaractere.append("!");
           ListeCaractere.append("%");
           ListeCaractere.append("§");
           ListeCaractere.append(";");
           ListeCaractere.append(".");
           ListeCaractere.append("?");
           ListeCaractere.append("<");
           ListeCaractere.append(">");
           ListeCaractere.append("&");
           ListeCaractere.append("#");
           ListeCaractere.append("(");
           ListeCaractere.append("-");
       }

       if( HaveCheckbox == 1 ){

           int TailleTableau = ListeCaractere.size();
           QString MdpGene   = "";

           int i = 0;

           QTime Heure = QTime();

           int Facteur = Heure.msecsTo(Heure.currentTime());

           srand(Facteur *rand());

           for( i=1;i<=ui->TailleMDP->value();i++ )
               MdpGene += ListeCaractere.at( ( rand()%(TailleTableau) ) );

           ui->Resultats->setText(MdpGene);
       }
       else
           ui->Resultats->setText("Vous devez choisir une option.");
}

void PasswordGenerator::on_CopierMdp_clicked()
{
    QClipboard *ClipIt = QApplication::clipboard();
    ClipIt->setText(ui->Resultats->text());
}
