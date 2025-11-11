#ifndef VIEWWIDGET1_H
#define VIEWWIDGET1_H

#include <QWidget>
#include "ui_viewwidget1.h"
#include "controllerlake.h"

class ViewWidget1 : public QWidget
{
    Q_OBJECT
public:
    ViewWidget1(QWidget *parent = nullptr);
    ~ViewWidget1();

private slots:
    void on_btnCreateOneLouncherStandard_clicked();
    void on_btnCreateOneLouncherLuxurious_clicked();
    void on_btnShowListLaunchers_clicked();
    void on_btnClearLog_clicked();

private:
    Ui::ViewWidget1 *ui;
    ControllerLake controller;
};

#endif // VIEWWIDGET1_H
