#ifndef JUMP_H
#define JUMP_H

#include <QMainWindow>

namespace Ui {
class Jump;
}

class Jump : public QMainWindow
{
    Q_OBJECT

public:
    explicit Jump(QWidget *parent = 0);
    virtual ~Jump();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Jump *ui;
};

#endif // JUMP_H
