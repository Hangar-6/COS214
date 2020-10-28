#ifndef TYRESTRATEGY_H
#define TYRESTRATEGY_H

using namespace std;

#include "Tyre.h"
#include <vector>

// Abstract startegy class
// Pushes 5 sets of tyres into a vector and returns to Strategist

class TyreStrategy {
    public:
        virtual vector<Tyre*> strategy() = 0;
};

#endif
