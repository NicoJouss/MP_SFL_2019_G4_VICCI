#ifndef INTERPRETATION_H
#define INTERPRETATION_H

#include "questions.h"

#include <QString>
class MainWindow;

class Interpretation
{
public:
    Interpretation(MainWindow * windows);
   int NbDemots;
   int tableau[100];

   MainWindow * m_windows;

   void nouvelleQuestion(QString question);

private:
    void afficher();
    int VerificationDePhrase();
    void RechercheBDD();
    bool Aurevoir(QString s);
    bool Bienvenue(QString s);
    bool traiterHeure(QString s);
    bool traiterMusique(QString s);
    bool traiterMeteo(QString s);

    void donnerReponseHeure();
};

#endif // INTERPRETATION_H
