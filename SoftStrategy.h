#ifndef SOFTSTRATEGY_H
#define SOFTSTRATEGY_H

#include "TyreStrategy.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class SoftStrategy: public TyreStrategy {

public:
    SoftStrategy(){}
    string takeAction(){return " team has decided to use soft tyres";}
};
//ConcreteStrategy
#endif
