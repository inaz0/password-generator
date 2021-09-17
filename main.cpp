//
//  QtCreator   : 4.14
//  Qt          : 5.15.2
//  Beautifier  : Clang (google style)
//
#include <QApplication>

#include "passwordgenerator.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  PasswordGenerator w;
  w.show();

  return a.exec();
}
