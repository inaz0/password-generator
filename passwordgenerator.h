#ifndef PASSWORDGENERATOR_H
#define PASSWORDGENERATOR_H

#include <QMainWindow>
#include <QClipboard>

namespace Ui {
    class PasswordGenerator;
}

class PasswordGenerator : public QMainWindow {
    Q_OBJECT
public:
    PasswordGenerator(QWidget *parent = 0);
    ~PasswordGenerator();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PasswordGenerator *ui;

private slots:
    void on_CopierMdp_clicked();
    void on_pushButton_clicked();
    void on_ActionMenu_triggered();
};

#endif // PASSWORDGENERATOR_H
