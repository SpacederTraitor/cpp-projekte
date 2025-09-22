#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "see.h"
#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_buttonPersonAnlegen_clicked();
    void on_buttonAlleKunden_clicked();

    void on_buttonLiegeAnlegen_clicked();
    void on_buttonMehrereLiegen_clicked();
    void on_buttonAlleLiegen_clicked();

    void on_buttonLiegeBuchen_clicked();
    void on_buttonAlleBuchungen_clicked();
    void on_buttonBuchungenLoeschen_clicked();

    void on_wassertemperaturaktuellbutton_clicked();
    void on_wasserqualitaetbutton_clicked();
    void on_personenanzahlbutton_clicked();

private:
    Ui::Widget *ui;
    See *see;
};

#endif // WIDGET_H
