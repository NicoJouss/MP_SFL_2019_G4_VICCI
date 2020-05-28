#include "questions.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
int i = 0;
Questions::Questions()
{
//Questions 1

//Questions 2

//Questions 3
}

void Questions::afficher()
{

}

void Questions::DemandeDeVicci()
{
    int i;
    //for (i = 0; i < 3; i++)
    if (i < 3)
    {
     if(i > 3)
     {
         i = 0;
     }

    switch (i) {
    case 1:
        cout<<"Bonjour ! Que puis-je pour vous"<<ends;
        break;
    case 2:
        cout<<"Bonjour, en quoi puis-je vous etres utile ?"<<ends;
        break;
    case 3:
        cout<<"Bonjour, quelle est votre requete ?"<<ends;
        break;
    }

}
}

void Questions::InitilialiserQuestions()
{

}
