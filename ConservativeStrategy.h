#ifndef CONSERVATIVESTRATEGY_H
#define CONSERVATIVESTRATEGY_H

#include "TyreStrategy.h"

// Concrete Strategy Class. 
// Creates 1 soft tyre, 3 sets of medium tyres and 1 hard tyres.

class ConservativeStrategy : public TyreStrategy {
    public:
        vector<Tyre*>setTyres();
};

#endif