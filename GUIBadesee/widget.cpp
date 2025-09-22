#include "widget.h"
#include "ui_widget.h"
#include <QInputDialog>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    see = new See();
}

Widget::~Widget()
{
    delete ui;
    delete see;
}

// ------------------ Personen ------------------

void Widget::on_buttonPersonAnlegen_clicked()
{
    bool ok;
    QString vorname = QInputDialog::getText(this, "Person anlegen", "Vorname:", QLineEdit::Normal, "", &ok);
    if (!ok || vorname.isEmpty()) return;

    QString nachname = QInputDialog::getText(this, "Person anlegen", "Nachname:", QLineEdit::Normal, "", &ok);
    if (!ok || nachname.isEmpty()) return;

    Person p = see->createPerson(vorname.toStdString(), nachname.toStdString());
    ui->plainTextEdit->appendPlainText("Person angelegt: " +
                                       QString::fromStdString(p.fullname()) +
                                       " (Kundennr: " + QString::number(p.getKundenNr()) + ")");
}

void Widget::on_buttonAlleKunden_clicked()
{
    QString out = "Alle Kunden:\n";
    for (Person& p : see->getPersonen()) {
        out += "Nr: " + QString::number(p.getKundenNr()) +
               " | " + QString::fromStdString(p.fullname()) +
               " | Status: " + QChar(p.getStatus()) + "\n";
    }
    ui->plainTextEdit->appendPlainText(out);
}

// ------------------ Liegen ------------------

void Widget::on_buttonLiegeAnlegen_clicked()
{
    bool ok;
    int m = QInputDialog::getInt(this, "Liege anlegen", "Modell (0=Simple..4=Schirm+Service):", 0, 0, 4, 1, &ok);
    if (!ok) return;

    Liege l = see->createLiege((BeachLoungerType)m);
    ui->plainTextEdit->appendPlainText("Liege angelegt: ID " +
                                       QString::number(l.getId()) +
                                       " Typ: " + QString::fromStdString(Liege::typeToStr(l.getType())));
}

void Widget::on_buttonMehrereLiegen_clicked()
{
    bool ok;
    int count = QInputDialog::getInt(this, "Mehrere Liegen", "Anzahl:", 1, 1, 100, 1, &ok);
    if (!ok) return;
    int m = QInputDialog::getInt(this, "Mehrere Liegen", "Modell (0..4):", 0, 0, 4, 1, &ok);
    if (!ok) return;

    see->createMultipleLiegen((BeachLoungerType)m, count);
    ui->plainTextEdit->appendPlainText(QString::number(count) + " Liegen angelegt.");
}

void Widget::on_buttonAlleLiegen_clicked()
{
    QString out = "Alle Liegen:\n";
    for (Liege& l : see->getLiegen()) {
        out += "ID: " + QString::number(l.getId()) +
               " | Typ: " + QString::fromStdString(Liege::typeToStr(l.getType())) +
               " | Zustand: " + QString::fromStdString(Liege::condToStr(l.getCondition())) + "\n";
    }
    ui->plainTextEdit->appendPlainText(out);
}

// ------------------ Buchungen ------------------

void Widget::on_buttonLiegeBuchen_clicked()
{
    bool ok;
    int kn = QInputDialog::getInt(this, "Liege buchen", "Kundennummer:", 0, 0, 999999, 1, &ok);
    if (!ok) return;
    int lid = QInputDialog::getInt(this, "Liege buchen", "Liege-ID:", 0, 0, 999999, 1, &ok);
    if (!ok) return;
    QString d = QInputDialog::getText(this, "Liege buchen", "Datum (YYYY-MM-DD):", QLineEdit::Normal, "2025-09-22", &ok);
    if (!ok) return;

    if (see->bookLiege(kn, lid, d.toStdString())) {
        ui->plainTextEdit->appendPlainText("Buchung erfolgreich.");
    } else {
        QMessageBox::warning(this, "Fehler", "Buchung fehlgeschlagen.");
    }
}

void Widget::on_buttonAlleBuchungen_clicked()
{
    QString out = "Buchungen:\n";
    for (BuchungEntry& b : see->getBuchungen()) {
        out += "Kunde " + QString::number(b.kundenNr) +
               " | Liege " + QString::number(b.liegeId) +
               " | Datum " + QString::fromStdString(b.datum) + "\n";
    }
    ui->plainTextEdit->appendPlainText(out);
}

void Widget::on_buttonBuchungenLoeschen_clicked()
{
    bool ok;
    QString pin = QInputDialog::getText(this, "Buchungen löschen", "PIN eingeben:", QLineEdit::Password, "", &ok);
    if (!ok) return;

    if (see->clearBuchungen(pin.toStdString())) {
        ui->plainTextEdit->appendPlainText("Alle Buchungen gelöscht.");
    } else {
        QMessageBox::warning(this, "Fehler", "Falsche PIN!");
    }
}

// ------------------ See Infos ------------------

void Widget::on_wassertemperaturaktuellbutton_clicked()
{
    int temp = see->getWassertemperaturaktuell();
    ui->plainTextEdit->appendPlainText(QString::number(temp) + " °C ist die aktuelle Wassertemperatur.");
}

void Widget::on_wasserqualitaetbutton_clicked()
{
    int qual = see->getWasserqualitaet();
    ui->plainTextEdit->appendPlainText("Wasserqualität: " + QString::number(qual));
}

void Widget::on_personenanzahlbutton_clicked()
{
    int anzahl = Person::getPersonenanzahl();
    ui->plainTextEdit->appendPlainText(QString::number(anzahl) + " Personen sind gerade im See.");
}
