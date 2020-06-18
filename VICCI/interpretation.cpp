#include "interpretation.h"
#include "mainwindow.h"

#include <iostream>
#include <stdio.h>
#include <string>
#include <QTime>
#include <stdlib.h>

#include <QString>



using namespace std;

//enum mots : String
//{
//    mot1,   //temps
//    mot2,   //aujourdhui,
//    mot3,   //demain,
//    mot4,   //musique,
//    mot5    //heure
//};
//enum genre : String //genre de musique
//{
//    pop,
//    electro,
//    rap,
//    rock,
//};

Interpretation::Interpretation(MainWindow * windows)
{
    m_windows = windows;
}

void Interpretation::afficher()
{

}

int Interpretation::VerificationDePhrase()
{

}


void Interpretation::RechercheBDD()
{

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
        s = "Salut, en quoi puis-je vous êtres utile ?";
        m_windows->ReponseVicci(s);
    }

    if( s.contains("Hey", Qt::CaseInsensitive) )
    {
        s = "Hey, quelle est votre requète ?";
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
        if(alea<33)
        {
            s = " Deux vaches discutent : \n - Ca te fais pas peur toi ces histoires de ''vache folle''? \n - Je m'en fiche je suis un lapin ! " ;
            m_windows->ReponseVicci(s);
        }
        if(alea >33 && alea <66)
        {
            s = " Un policier arrête un automobiliste : \n _Vous roullez à combien ? \n - Bah tout seul pourquoi ?";
            m_windows->ReponseVicci(s);
        }
        if(alea >66 && alea <99)
        {
            s = " Deux puces sortent du cinéma, l'une dit à l'autre : \n -Tu rentre à pied? \n - Oh, non je prend un chien !";
            m_windows->ReponseVicci(s);
        }
    }
        if( s.contains("Info", Qt::CaseInsensitive) )
        {
            s = " - Si vous voulez de la musiques demandez moi de la musique suivi du genre que vous souhaitez écouter ( pop, rock, rap, etc... \n ";
            s = s + "- Si vous voulez l'heure demandez moi l'heure. \n ";
            s = s+ "- Si vous voulez la météo d'aujourd'hui jusqu'à aprés demain, demandez moi le temps qu'il fait suivi du mot clé aujourd'hui, demain ou aprés-demain.";
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
    std::string mots1 = "electro";
    std::string mots2 = "rap";
    std::string mots3 = "jazz";
    std::string mots4 = "rock";
    std::string mots5 = "classique";

    if ( s.contains("musique", Qt::CaseInsensitive) )
    {

        if( s.contains("pop", Qt::CaseInsensitive) )
        {
            std::cout << "" << std::endl;
            s = "Mettre de la musique pop";
            m_windows->jouerMusique("AC-DC - Back In Black (Official Video)(youzik.net).mp3");

            //m_windows->ReponseVicci(s);
        }
        if ( s.contains("electro", Qt::CaseInsensitive) )
        {
            s ="Mettre de la musique electro";
            m_windows->ReponseVicci(s);
        }
        if( s.contains("rap", Qt::CaseInsensitive) )
        {
            s ="Mettre de la musique rap";
            m_windows->ReponseVicci(s);
        }
        if( s.contains("jazz", Qt::CaseInsensitive) )
        {
            s ="Mettre de la musique jazz";
            m_windows->ReponseVicci(s);
        }
        if( s.contains("rock", Qt::CaseInsensitive) )
        {
             s= "Mettre de la musique rock";
            s = s+ "Oh year ! J'adore ce son";
              m_windows->jouerMusique("AC-DC - Back In Black (Official Video)(youzik.net).mp3");
            m_windows->ReponseVicci(s);
        }
        if( s.contains("classique", Qt::CaseInsensitive) )
        {
            s = "Mettre de la musique classique";
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



