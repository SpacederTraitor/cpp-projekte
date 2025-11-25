#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lakeentrycontroller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();
    void on_btnNext_clicked();
    void on_btnPrevious_clicked();
    void on_listWidgetEntries_currentRowChanged(int row);

private:
    void updateList();
    void updateCurrentEntry();

    Ui::MainWindow *ui;

    LakeEntryController m_manager;   // Falls du einen anderen Namen hast -> melden
};

#endif // MAINWINDOW_H
