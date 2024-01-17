#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include "Game.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int displayMenu();

signals:
    void startGameClicked();
    void historyClicked();
    void resetGameClicked();
    void exitGameClicked();



private:
    Ui::MainWindow *ui;
    Game game;
};


#endif // MAINWINDOW_H
