#ifndef INTERPRETATION_H
#define INTERPRETATION_H

#include "questions.h"

#include <QString>
class MainWindow;

class Interpretation
{
public:
    Interpretation(MainWindow * windows);


   MainWindow * m_windows;

   void nouvelleQuestion(QString question);

private:

    bool Discussion(QString s);
    bool traiterHeure(QString s);
    bool traiterMusique(QString s);
    bool traiterMeteo(QString s);

    void donnerReponseHeure();
};

#endif // INTERPRETATION_H
