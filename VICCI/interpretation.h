#ifndef INTERPRETATION_H
#define INTERPRETATION_H
#include "questions.h"


class Interpretation
{
public:
    Interpretation();
   int NbDemots;
   int tableau[100];


private:
    void afficher();
    int VerificationDePhrase();
    void LectureDePhrase();
    void RechercheBDD();
};

#endif // INTERPRETATION_H
