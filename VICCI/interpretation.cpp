#include "interpretation.h"
#include "mainwindow.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <QTime>
#include <stdlib.h>
#include <QString>

using namespace std;

Interpretation::Interpretation(MainWindow * windows)
{
    m_windows = windows;
}

void Interpretation::nouvelleQuestion( QString question )
{
    std::cout << question.toStdString() << std::endl;
    bool trouveReponse = false;


    if ( ! trouveReponse )
        trouveReponse = traiterHeure(question);
    if ( ! trouveReponse )
        trouveReponse = traiterMeteo(question);
    if ( ! trouveReponse )
        trouveReponse = traiterMusique(question);
    if ( ! trouveReponse )
        trouveReponse = Discussion(question);
}

bool Interpretation::Discussion(QString s)
{
    if( s.contains("Bonjour", Qt::CaseInsensitive) )
    {
        s = "Bonjour ! Que puis-je pour vous";
        m_windows->ReponseVicci(s);
    }

    if( s.contains("Salut", Qt::CaseInsensitive) )
    {
        s = "Salut, en quoi puis-je vous être utile ?";
        m_windows->ReponseVicci(s);
    }

    if( s.contains("Hey", Qt::CaseInsensitive) )
    {
        s = "Hey, quelle est votre requête ?";
        m_windows->ReponseVicci(s);
    }
    if( s.contains("Rien", Qt::CaseInsensitive) )
    {
        s = "D'accord.";
        m_windows->ReponseVicci(s);
    }
    if( s.contains("Au revoir", Qt::CaseInsensitive) )
    {
        s = "A bientot !";
        m_windows->ReponseVicci(s);
    }
    if( s.contains("blague", Qt::CaseInsensitive) )
    {
        int  alea = rand()%100;
        if(alea<25)
        {
            s = " Deux vaches discutent : \n - Ca te fais pas peur toi ces histoires de ''vache folle''? \n - Je m'en fiche je suis un lapin ! " ;
            m_windows->ReponseVicci(s);
        }
        if(alea >25 && alea <50)
        {
            s = " Un policier arrête un automobiliste : \n _Vous roullez à combien ? \n - Bah tout seul pourquoi ?";
            m_windows->ReponseVicci(s);
        }
        if(alea >50 && alea <75 )
        {
            s = " Deux puces sortent du cinéma, l'une dit à l'autre : \n -Tu rentre à pied? \n - Oh, non je prend un chien !";
            m_windows->ReponseVicci(s);
        }
        if(alea > 75)
        {
            s = "Comment appelle-t-on un chien qui n'a pas de pattes ? \n On ne l’appelle pas, on va le chercher.";
            m_windows->ReponseVicci(s);
        }
    }
    if( s.contains("Info", Qt::CaseInsensitive) )
    {
        s = "- Si vous voulez de la musiques demandez moi de la musique suivi du genre que vous souhaitez écouter (pop, rock, rap, etc...). \n ";
        s = s + "- Si vous voulez l'heure demandez moi l'heure. \n ";
        s = s+ "- Si vous voulez la météo d'aujourd'hui jusqu'à aprés demain, demandez moi le temps qu'il fait suivi du mot clé aujourd'hui, demain ou aprés-demain. \n";
        s = s+ "- Envie de rire ? Demandez moi de vous raconter une blague ! \n";
        m_windows->ReponseVicci(s);
    }

}


bool Interpretation::traiterHeure(QString s)
{
    if (s.contains("heure", Qt::CaseInsensitive) )
    {
        donnerReponseHeure();
        return true;
    }
    else
        return false;
}

bool Interpretation::traiterMusique(QString s)
{

    std::string mots0 = "pop";
    std::string mots1 = "chill";
    std::string mots2 = "rap";
    std::string mots3 = "jazz";
    std::string mots4 = "rock";
    std::string mots5 = "classique";

    if ( s.contains("musique", Qt::CaseInsensitive) )
    {

        if( s.contains("pop", Qt::CaseInsensitive) )
        {
            std::cout << "" << std::endl;
            s = "Mettre de la musique pop \n";
            s = s + "Oui désolé c'est pas Mickeal Jackson, et alors ?";
            m_windows->jouerMusique("Imagine Dragons - Believer(youzik.net).mp3");

            m_windows->ReponseVicci(s);
        }
        if ( s.contains("Chill", Qt::CaseInsensitive) )
        {
            s ="Mettre de la musique Chill \n";
            s = s + "Bon pour la relaxation";
            m_windows->jouerMusique("driver - the eye of truth(youzik.net).mp3");
            m_windows->ReponseVicci(s);
        }
        if( s.contains("rap", Qt::CaseInsensitive) )
        {
            s ="Mettre de la musique rap \n";
            s = s+ "Take the mic ! ";
            m_windows->jouerMusique("Eminem - Till I Collapse [HD](youzik.net).mp3");
            m_windows->ReponseVicci(s);
        }
        if( s.contains("jazz", Qt::CaseInsensitive) )
        {
            s ="Mettre de la musique jazz \n";
            s = s + " L'instru est top !";

            m_windows->jouerMusique("Marlena Shaw - California Soul(youzik.net).mp3");
            m_windows->ReponseVicci(s);
        }
        if( s.contains("rock", Qt::CaseInsensitive) )
        {
            s= "Mettre de la musique rock \n";
            s = s+ "Oh year ! J'adore ce son";
            m_windows->jouerMusique("AC-DC - Back In Black (Official Video)(youzik.net).mp3");
            m_windows->ReponseVicci(s);
        }
        if( s.contains("classique", Qt::CaseInsensitive) )
        {
            s = "Aucunes musiques disponible. Mais en voici une qui n'as rien à voir. \n";
            m_windows->jouerMusique("Come and get Your Love(Guardians of the Galaxy Intro song) - Redbone(youzik.net)");
            m_windows->ReponseVicci(s);
        }
    }
}

bool Interpretation::traiterMeteo(QString s)
{
    std::string phrase1;
    std::string phrase2 = "Quelle heure est-il ?";
    std::string mots0 = "temps";
    std::string mots1 = "aujourdhui";
    std::string mots2 = "demain";
    std::string mots3 = "apres-demain";


    if(s.contains("temps", Qt::CaseInsensitive) && s.contains("aujourd'hui", Qt::CaseInsensitive) )
    {

        s = "Aujourd'hui, il fait 28°c";
        m_windows->ReponseVicci(s);
    }
    if (s.contains("temps", Qt::CaseInsensitive) && s.contains(" demain", Qt::CaseInsensitive))
    {
        s = "Demain, il y aura des nuages.";
        m_windows->ReponseVicci(s);
    }
    if(s.contains("temps", Qt::CaseInsensitive) && s.contains("apres-demain", Qt::CaseInsensitive))
    {
        s = "Dans deux jours, il pleuvra.";
        m_windows->ReponseVicci(s);
    }
}

void Interpretation::donnerReponseHeure()
{
    QTime heure = QTime::currentTime ();
    QString s;
    s = "Il est ";
    s = s + heure.toString("H:mm:ss");
    m_windows->ReponseVicci(s);
}



