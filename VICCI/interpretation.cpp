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

void LectureDePhrase()
{




      
//            std::string phrase1;
//            std::string phrase2 = "Quelle heure est-il ?";
//            std::string mots0 = "temps";
//            std::string mots1 = "aujourdhui";
//            std::string mots2 = "demain";
//            std::string mots3 = "dansdeuxjours";


//            if(s.contains("temps", Qt::CaseInsensitive) && s.contains("aujourd'hui", Qt::CaseInsensitive) ))
//            {
//                cout<<"Aujourd'hui, il fait 28°c"<<endl;
//            }
//            if (s.contains("temps", Qt::CaseInsensitive) && s.contains("demain", Qt::CaseInsensitive))
//            {
//                cout<<"Demain, il y aura des nuages."<<endl;
//            }
//            if(s.contains("temps", Qt::CaseInsensitive) && s.contains("dansdeuxjours", Qt::CaseInsensitive))
//            {
//                cout<<"Dans deux jours, il pleuvra."<<endl;
//            }



       

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

        s = "Mettre de la musique pop";
         m_windows->ReponseVicci(s);
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
        s = "Mettre de la musique rock";
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
    std::string mots3 = "dansdeuxjours";


    if(s.contains("temps", Qt::CaseInsensitive) && s.contains("aujourd'hui", Qt::CaseInsensitive) )
    {

     s = "Aujourd'hui, il fait 28°c";
     m_windows->ReponseVicci(s);
    }
    if (s.contains("temps", Qt::CaseInsensitive) && s.contains("demain", Qt::CaseInsensitive))
    {
        s = "Demain, il y aura des nuages.";
           m_windows->ReponseVicci(s);
    }
    if(s.contains("temps", Qt::CaseInsensitive) && s.contains("dansdeuxjours", Qt::CaseInsensitive))
    {
        s = "Dans deux jours, il pleuvra.";
           m_windows->ReponseVicci(s);
    }
}


void Interpretation::donnerReponseHeure()
{
    QTime heure = QTime::currentTime ();
    QString s = heure.toString("il est H:m:s a");

    m_windows->ReponseVicci(s);
}


