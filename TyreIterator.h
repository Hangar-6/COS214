#ifndef TYREITERATOR_H
#define TYREITERATOR_H
#include "RaceTyres.h"
#include <string>
using namespace std;

class TyreIterator{
    friend class RaceTyres;
protected:
    string Head;
    string Current;
    TyreIterator(const RaceTyres&);
public:
    TyreIterator();
};

#endif
