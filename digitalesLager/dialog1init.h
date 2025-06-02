#ifndef DIALOG1INIT_H
#define DIALOG1INIT_H

#include <QDialog>
#include "uimain.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog1Init;
}
QT_END_NAMESPACE

class Dialog1Init : public QDialog
{
    Q_OBJECT

public:
    Dialog1Init(QWidget *parent = nullptr);
    ~Dialog1Init();

private:
    Ui::Dialog1Init *ui;
    UiMain *uiMain;
};
#endif // DIALOG1INIT_H
