#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "requete.h"
#include "interpretation.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void donnerResultat( QString s );

    void ReponseVicci(QString reponse);

private slots:
    void on_trameButton_clicked();
    void requeteRecue(QString nom, QString resultat);
    void Question();


    private:
    Ui::MainWindow *ui;
    Requete * m_requete;
    Interpretation m_interpretation;
};
#endif // MAINWINDOW_H
