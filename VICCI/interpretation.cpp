#include "interpretation.h"
#include "mainwindow.h"

#include <iostream>
#include <string>
#include <QString>

using namespace std;

enum mots
{
    mot1,   //temps
    mot2,   //aujourdhui,
    mot3,   //demain,
    mot4,   //musique,
    mot5    //heure
};
enum genre //genre de musique
{
    pop,
    electro,
    rap,
    rock,
};

Interpretation::Interpretation(MainWindow * windows)
{
    m_windows = windows;
}

void Interpretation::afficher()
{
    //    if(strstr(texteEntré, "salut"))
    //    {
    //      // "salut" a été entré                                       (cela est un test)
    //    }
}

int Interpretation::VerificationDePhrase()
{
    //#include <stdio.h>
    //#include <stdlib.h>

    //{
    //    long ascii = 0;
    //    char lettre = 0;                                                (cela ne fonctionne pas)

    //    lettre = 'a';
    //    ascii = lettre;
    //    printf("Lettre: %c\nCode ASCII: %ld\n", lettre, ascii);
    //    printf("%c", ascii);

    //    return 0;
    //}
}

void LectureDePhrase(Interpretation * p)
{

    int total = 0;

    for(int i = 0; i<30; i ++)
    {

        long ascii = 0;
        std::string phrase1 = "Quelle temps fera-t-il demain ?";
        std::string phrase2 = "Quelle heure est-il ?";
        std::string mots = "temps";

        std::cout<<phrase1<<"\n"<<endl;
        std::cin>>phrase1;

        if ( phrase1.find(mot1) != -1)
        {
            switch (phrase1.find(mot1) != -1) {                          //en developpement
                phrase1.find(mot1) != -1;
                cout<<"En ce moment, il fait beau."<<ends;
                break;
                phrase1.find(mot1 & mot2) != -1;
                cout<<"Demain, il y aura des nuages."<<ends;
                break;
                phrase1.find(mot1 & mot3) != -1;
                cout<<"Dans deux jours, il pleuvra."<<ends;
                break;
            }
            cout<<"Aujourd'hui, il fait 28°c"<<endl;

        }


                  cout<<"texte"<<phrase1<<endl;
            //            ascii = lettre;
            //            p->tableau[i] = ascii;




            //    total = total + ascii;
            //    printf("Lettre: %c\nCode ASCII: %ld\n", lettre, total);
            //    printf("%c", total);

            //            if (total == 553) // temps
            //            {
            //                cout<<"il fait 25°c"<<endl;
            //                total = 0;
            //            }
            //            if (total == 1127) // aujourd'hui
            //            {
            //                cout<<"aujourd'hui, il fait beau"<<endl;
            //                total = 0;
            //            }
            //            if (total == 622) // demain
            //            {
            //                cout<<"Demain, le temps sera nuageux"<<endl;
            //                total = 0;
            //            }
            //        }
            //cout<<p->tableau<<endl;

        }
}

void Interpretation::RechercheBDD()
{

}

void Interpretation::nouvelleQuestion( QString question )
{
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
    if ( s.contains("heure", Qt::CaseInsensitive) )
    {
        donnerReponseHeure();
        return true;
    }
    else
        return false;
}

bool Interpretation::traiterMusique(QString s)
{

}

bool Interpretation::traiterMeteo(QString s)
{

}

void Interpretation::donnerReponseHeure()
{
    QString heure = "Il est 8h00";

    m_windows->donnerResultat(heure);

}


