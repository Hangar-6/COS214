#ifndef HARDSTRATEGY_H
#define HARDSTRATEGY_H

#include "TyreStrategy.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class HardStrategy: public TyreStrategy {

public:
    HardStrategy(){}
    string takeAction(){return " team has decided to use hard tyres";}
};
//ConcreteStrategy
#endif
