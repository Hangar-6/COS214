#ifndef BALANCEDSTRATEGY_H
#define BALANCEDSTRATEGY_H

#include "TyreStrategy.h"

// Concrete Strategy Class. 
// Creates 2 sets of soft tyres and 2 sets of medium tyres and 1 hard tyre.

class BalancedStrategy : public TyreStrategy {
    public:
        vector<Tyre*> strategy();
};

#endif