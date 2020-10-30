#ifndef TYRESTRATEGY_H
#define TYRESTRATEGY_H

using namespace std;

#include "SoftTyre.h"
#include "MediumTyre.h"
#include "HardTyre.h"
#include <vector>

// Abstract startegy class
// Pushes 5 sets of tyres into a vector and returns to Strategist 
    
class TyreStrategy {
    public:
        vector<Tyre*> strategy();
        virtual vector<Tyre*>setTyres() = 0;
};

#endif