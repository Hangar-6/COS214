#ifndef QUALIFYING_H
#define QUALIFYING_H

#include "RaceSession.h"

class Qualifying : public RaceSession {
    public:
        Qualifying();
        FinishPosition runSession(Team* team);      // each car sets a lap to determine race start positions
};

#endif
