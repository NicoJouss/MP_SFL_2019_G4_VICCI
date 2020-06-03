#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // construction de l'objet permettant de réaliser des requêtes via un page web php
    m_requete = new Requete();
    connect(m_requete, SIGNAL(received(QString, QString)), this, SLOT(requeteRecue(QString, QString)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

/** --------------------------------------------------------------------------------------
 * \brief Méthode appelée lorsque l'on clique sur le bouton trameButton.
 */
void MainWindow::on_trameButton_clicked()
{
    m_requete->update("trame", "http://217.128.90.45:8044/html/vantagePro2/trame.php");
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
}
