#include "interpretation.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

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

Interpretation::Interpretation()
{

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

void LectureDePhrase()
{

    int total = 0;

    for(int i = 0; i<30; i ++)
    {


      
            std::string phrase1;
            std::string phrase2 = "Quelle heure est-il ?";
            std::string mots0 = "temps";
            std::string mots1 = "aujourdhui";
            std::string mots2 = "demain";
            std::string mots3 = "dansdeuxjours";
            std::string mots4 = "musique";
            std::string mots5 = "pop";
            std::cin>>phrase1;
            std::cout<<phrase1<<"\n"<<endl;

            if(phrase1.find(mots0) != -1 && phrase1.find(mots1) != -1)
            {
                cout<<"Aujourd'hui, il fait 28°c"<<endl;
            }
            if (phrase1.find(mots0) != -1 && phrase1.find(mots2) != -1)
            {
                cout<<"Demain, il y aura des nuages."<<ends;
            }
            if(phrase1.find(mots0) != -1 && phrase1.find(mots3) != -1)
            {
                cout<<"Dans deux jours, il pleuvra."<<ends;
            }
        }


       

        }



        }
}

void Interpretation::RechercheBDD()
{

}
