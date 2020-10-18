#ifndef NONEUROPEANSTRATEGY_H
#define NONEUROPEANSTRATEGY_H

#include "Locationtrategy.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class NonEuropeanStrategy: public LocationStrategy {

public:
    NonEuropeanStrategy(){}
    string takeAction(){return "Race is located in non-europe.";}
};
//ConcreteStrategy
#endif
