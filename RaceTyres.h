#ifndef RACETYRES_H
#define RACETYRES_H
#include <string>
#include "Tyres.h"
using namespace std;

class RaceTyres{    //Memento

private:
    Tyres** memento;
    const int TotalTyres = 5;
public:
    RaceTyres();
    Tyres** getTyres();
    void setTyres(Tyres* NewSet);
};

#endif
