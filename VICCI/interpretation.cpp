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

    using namespace std;

    {


        for(int i = 0; i<30; i ++)
        {


            std::string phrase1 = "Quelle temps fera-t-il demain ?";
            std::string phrase2 = "Quelle heure est-il ?";
            std::string mots1 = "temps";
            std::string mots2 = "demain";
            std::string mots3 = "apres-demain";
            std::string mots4 = "musique";
            std::string mots5 = "pop";
            std::cout<<phrase1<<"\n"<<endl;
            std::cin>>phrase1;

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
}


void Interpretation::RechercheBDD()
{

}
