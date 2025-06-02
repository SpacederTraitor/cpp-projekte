#ifndef UIMAIN_H
#define UIMAIN_H

#include <QWidget>

namespace Ui {
class UiMain;
}
class Dialog1Init;

class UiMain : public QWidget
{
    Q_OBJECT

public:
    explicit UiMain(QWidget *parent = nullptr, Dialog1Init *d1 = nullptr);
    ~UiMain();

private:
    Ui::UiMain *ui;
    Dialog1Init *dialog1Init;
};

#endif // UIMAIN_H
