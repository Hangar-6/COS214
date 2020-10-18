#ifndef EUROPEANSTRATEGY_H
#define EUROPEANSTRATEGY_H

#include "Locationtrategy.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class EuropeanStrategy: public LocationStrategy {

public:
    EuropeanStrategy(){}
    string takeAction(){return "Race is located in europe.";}
};
//ConcreteStrategy
#endif
