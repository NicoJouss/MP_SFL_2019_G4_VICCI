#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "requete.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    private slots:
    void on_trameButton_clicked();
    void requeteRecue(QString nom, QString resultat);

    private:
    Ui::MainWindow *ui;
    Requete * m_requete;
};
#endif // MAINWINDOW_H
