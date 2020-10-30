
  #ifndef AGGRESSIVESTRATEGY_H
#define AGGRESSIVESTRATEGY_H

#include "TyreStrategy.h"

// Concrete Strategy Class.
// Creates 3 sets of soft tyres and 2 sets of medium tyres.

class AggressiveStrategy : public TyreStrategy {
    public:
        vector<Tyre*>setTyres();

};

#endif
