#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// --- Einfache verkettete Liste für int-Werte ---
struct Node {
    int value;
    Node* next;
    Node(int v) : value(v), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() {
        clear();
    }

    void insertSorted(int v) {
        Node* newNode = new Node(v);

        // Falls Liste leer ist oder neuer Wert am Anfang stehen soll
        if (!head || v < head->value) {
            newNode->next = head;
            head = newNode;
            return;
        }

        // Passende Stelle suchen
        Node* current = head;
        while (current->next && current->next->value <= v) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    QStringList toQStringList() const {
        QStringList list;
        Node* current = head;
        while (current) {
            list << QString::number(current->value);
            current = current->next;
        }
        return list;
    }

    void clear() {
        Node* current = head;
        while (current) {
            Node* tmp = current;
            current = current->next;
            delete tmp;
        }
        head = nullptr;
    }

private:
    Node* head;
};


// --- MainWindow-Klasse ---
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonAdd_clicked();

private:
    Ui::MainWindow *ui;
    LinkedList orders;

    void updateListWidget();
};

#endif // MAINWINDOW_H
