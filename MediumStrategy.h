#ifndef MEDIUMSTRATEGY_H
#define MEDIUMSTRATEGY_H

#include "TyreStrategy.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class Mediumtrategy: public TyreStrategy {

public:
    MediumStrategy(){}
    string takeAction(){return " team has decided to use medium tyres";}
};
//ConcreteStrategy
#endif
