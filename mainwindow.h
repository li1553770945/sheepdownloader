#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void InitConfig();
    void Download();
    Ui::MainWindow *ui;
    SettingWindow* setting_window;

private slots:
    void on_SettingAction_triggered();
    void on_DownloadButton_clicked();
};
#endif // MAINWINDOW_H
