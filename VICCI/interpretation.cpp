#include "interpretation.h"
#include <iostream>
#include <string>

using namespace std;

enum mots
{
    mot1 = temps;
    mot2 = aujourdhui;
    mot3 = demain;
    mot4 = apres-demain;
    mot5 = heure;
    mot6 = musique
};

Interpretation::Interpretation()
{

}

void Interpretation::afficher()
{
//    if(strstr(texteEntré, "salut"))
//    {
//      // "salut" a été entré
//    }
}

int Interpretation::VerificationDePhrase()
{
#include <stdio.h>
#include <stdlib.h>

{
    long ascii = 0;
    char lettre = 0;

    lettre = 'a';
    ascii = lettre;
    printf("Lettre: %c\nCode ASCII: %ld\n", lettre, ascii);
    printf("%c", ascii);

    return 0;
}
}

void LectureDePhrase(Interpretation * p)
{

    using namespace std;

    {
        int total = 0;

        for(int i = 0; i<30; i ++)
        {
            long ascii = 0;
            std::string phrase1 = "Quelle temps fera-t-il demain ?";
            std::string phrase2 = "Quelle heure est-il ?";
            //std::string mot = "temps"; //faire enum de mots pour la meteo
            std::cout<<phrase1<<"\n"<<endl;
            std::cin>>phrase1;

            if ( phrase1.find(mot1) != -1)
            {
                switch (phrase1) {
                phrase1.find(mot1) != -1;
                    cout<<"_ "<<ends;
                    break;
               phrase1.find(mot2) != -1;
                    cout<<"O "<<ends;
                    break;
                phrase1.find(mot3) != -1;
                    cout<<"X "<<ends;
                    break;
                }
                cout<<"Aujourd'hui, il fait 28°c"

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

//    }
}


void Interpretation::RechercheBDD()
{

}
