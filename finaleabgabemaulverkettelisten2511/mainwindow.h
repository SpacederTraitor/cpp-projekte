#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QLineEdit;
class QPushButton;
class QListView;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QLineEdit* orderLineEdit() const;
    QPushButton* addButton() const;
    QListView* orderListView() const;

private:
    Ui::MainWindow *ui;
};

#endif
