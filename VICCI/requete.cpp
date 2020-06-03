/** \file requete.cpp
 * \brief Fichier d'implémentation de la class requete.
 * \author Sébastien Angibaud
 */

#include "requete.h"

#include <QNetworkReply>
#include <iostream>

/** --------------------------------------------------------------------------------------
 * \brief Constructeur de la classe requete
 */
Requete::Requete()
    : m_pret(true)
{
    m_manager = new QNetworkAccessManager(this);

    connect(m_manager, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(replyFinished(QNetworkReply*)));
}

/** --------------------------------------------------------------------------------------
 * \brief Demande d'une nouvelle page.
 * \param nom Un identifiant pour la requête.
 * \param url L'URL demandée.
 */
void Requete::update(QString nom, QString url)
{
    if ( m_pret )
    {
        m_pret = false;
        m_nom = nom;
        m_url = url;
        m_manager->get(QNetworkRequest(QUrl(m_url)));
    }
    else
        std::cout << "Requete " << nom.toStdString() << " non effectue car la precédente n'est pas terminee." << std::endl;
}

/** --------------------------------------------------------------------------------------
 * \brief Méthode appelée lors de la réception du contenu de la page.
 * \param reply Un pointeur sur l'objet contenant les informations reçues.
 */
void Requete::replyFinished(QNetworkReply * reply)
{
    QString resultat(reply->readAll());

    std::cout << "Resultat de la requete " << m_nom.toStdString() << std::endl;
    std::cout << resultat.toStdString() << std::endl;

    emit received(m_nom, resultat );

    m_pret = true;
}

