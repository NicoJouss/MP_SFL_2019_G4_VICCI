#ifndef REQUETE_H
#define REQUETE_H

/**
 * \file requete.h
 * \brief Fichier de déclaration de la classe requete.
 * \author Sébastien Angibaud
 */

#include <QNetworkAccessManager>
#include <QObject>
#include <QString>

/** --------------------------------------------------------------------------------------
 * \class Requete
 * \brief Classe permettant de récupérer le contenu d'une page à partir de son URL.
 */
class Requete : public QObject
{
        Q_OBJECT

    public:
        Requete();

        void update(QString nom, QString url);

    signals:
        /** --------------------------------------------------------------------------------------
         * \brief Signal informant la réception de la requête.
         * \param nom L'identifiant de la requête.
         * \param resutat Le résultat de la  requête.
         */
        void received(QString nom, QString resultat);

    public slots:
        void replyFinished(QNetworkReply* reply);

    private:
        QNetworkAccessManager * m_manager;

        /** --------------------------------------------------------------------------------------
         * \brief Un nom permettant d'identifier la requête.
         */
        QString m_nom;

        /** --------------------------------------------------------------------------------------
         * \brief L'URL demandée.
         */
        QString m_url;

        /** --------------------------------------------------------------------------------------
         * \brief Indique s'il est possible de faire actuellement une requete.
         */
        bool m_pret;
};

#endif // REQUETE_H
