#ifndef RACE_H
#define RACE_H

#include "RaceSession.h"

class Race : public RaceSession {
    public:
        FinishPosition runSession(Team* team);      // determine finishing position for each car
};

#endif
