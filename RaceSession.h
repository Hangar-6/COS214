#ifndef RACESESSION_H
#define RACESESSION_H

struct FinishPosition {
    int car1;
    int car2;
};

// #include "Team.h"
#include <stdlib.h>
#include <time.h>

class Team;

class RaceSession {
    public:
        virtual FinishPosition runSession(Team* team) = 0;        // simulate running of session
};

#endif
