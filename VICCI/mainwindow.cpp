#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_interpretation(this)
    , m_player(NULL)
{
    ui->setupUi(this);

    // construction de l'objet permettant de réaliser des requêtes via un page web php
    m_requete = new Requete();
    connect(m_requete, SIGNAL(received(QString, QString)), this, SLOT(requeteRecue(QString, QString)));}

MainWindow::~MainWindow()
{
    delete ui;
}

/** --------------------------------------------------------------------------------------
 * \brief Méthode appelée lorsque l'on clique sur le bouton trameButton.
 */
void MainWindow::on_trameButton_clicked()
{

   // m_requete->update("trame", "http://217.128.90.45:8044/html/vantagePro2/trame.php");
     m_requete->update("musique", "http://127.0.0.10/musiqueSelonArtiste.php");
}

/** --------------------------------------------------------------------------------------
 * \brief Méthode appelée lors de la réception d'une requête.
 * \param nom L'identifiant de la requête
 * \param resultat Le résultat de la requête
 */


void MainWindow::requeteRecue(QString nom, QString resultat)
{
    if ( nom.compare("trame") == 0 )
        ui->trameResultat->setPlainText(resultat);
    else if ( nom.compare("musique") == 0 )
        ReponseVicci(resultat);
}

void MainWindow::donnerResultat(QString s)
{

}

void MainWindow::jouerMusique(QString s)
{
    m_player = new QMediaPlayer;

    std::cout << QUrl::fromLocalFile(s).toString().toStdString() << std::endl;

    m_player->setMedia(QUrl::fromLocalFile(s));
    m_player->setVolume(50);
    m_player->play();
}

void MainWindow::Question()
{
     m_interpretation.nouvelleQuestion("il fait beau. ");
}

void MainWindow::ReponseVicci(QString reponse)
{
    ui->ReponseVicci->setPlainText(reponse);
}

void MainWindow::on_pushButton_clicked()
{
    m_interpretation.nouvelleQuestion(ui->EntreeText->toPlainText());
}

Requete * MainWindow::getRequete() const
{
    return m_requete;
}
