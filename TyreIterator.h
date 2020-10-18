#ifndef TYREITERATOR_H
#define TYREITERATOR_H
#include "RaceTyres.h"
#include <string>
using namespace std;

class TyreIterator{
private:
    Tyres** CurrentTyres;   //Array of tyres to iterate
protected:
    int Head;               // Initialize to 0 in constructor
    int Current;            // Initialize to 0 in constructor - Transverse CurrentTyres
    TyreIterator(RaceTyres* RT);
public:
    TyreIterator();
    void setTyres(RaceTyres* RT);   //Setter for CurrentTyres
    void Next();                    //Transverse array
    Tyres* returnCurrent();         //Return current index
};

#endif
