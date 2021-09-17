#include "passwordgenerator.h"

#include <qdatetime.h>

#include <QFile>
#include <QIcon>
#include <QLabel>
#include <QPixmap>
#include <QSize>
#include <QTextBrowser>
#include <QWidget>

#include "ui_passwordgenerator.h"
PasswordGenerator::PasswordGenerator(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::PasswordGenerator) {
  ui->setupUi(this);
  initStyle();
  //  QStatusBar *barreEtat = statusBar();
  //  barreEtat->showMessage("(c) 2017 Alexandre J. | www.kanjian.fr");
}

PasswordGenerator::~PasswordGenerator() { delete ui; }

void PasswordGenerator::changeEvent(QEvent *e) {
  QMainWindow::changeEvent(e);
  switch (e->type()) {
    case QEvent::LanguageChange:
      ui->retranslateUi(this);
      break;
    default:
      break;
  }
}

void PasswordGenerator::initStyle() {
  QFile qss(":/style.qss");
  if (qss.open(QFile::ReadOnly)) {
    auto ba = qss.readAll();
    setStyleSheet(ba);
    qss.close();
  }
}

void PasswordGenerator::on_ActionMenu_triggered() {
  //  QStatusBar *barreEtat = statusBar();
  //  barreEtat->showMessage("(c) 2010 Bishamonten Technologies | www.bsmt.fr");
}

void PasswordGenerator::on_pushButton_clicked() {
  QList<QString> ListeCaractere;

  int HaveCheckbox = 0;

  if (ui->Lowercase->isChecked()) {
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

  if (ui->checkBox->isChecked()) {
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

  if (ui->checkBox_2->isChecked()) {
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

  if (ui->checkBox_3->isChecked()) {
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

  if (HaveCheckbox == 1) {
    int TailleTableau = ListeCaractere.size();
    QString MdpGene = "";

    int i = 0;

    QTime Heure = QTime();

    int Facteur = Heure.msecsTo(Heure.currentTime());

    srand(Facteur * rand());

    for (i = 1; i <= ui->TailleMDP->value(); i++)
      MdpGene += ListeCaractere.at((rand() % (TailleTableau)));

    ui->Resultats->setText(MdpGene);
  } else
    ui->Resultats->setText("Vous devez choisir une option.");
}

void PasswordGenerator::on_CopierMdp_clicked() {
  QClipboard *ClipIt = QApplication::clipboard();
  ClipIt->setText(ui->Resultats->text());
}
