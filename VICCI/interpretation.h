#ifndef INTERPRETATION_H
#define INTERPRETATION_H
#include "questions.h"


class Interpretation : public Questions
{
public:
    Interpretation();


private:
    void afficher();
    void VerificationDePhrase();
    void LectureDePhrase();
    void RechercheBDD();
};

#endif // INTERPRETATION_H
