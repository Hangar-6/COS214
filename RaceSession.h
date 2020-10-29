#ifndef RACESESSION_H
#define RACESESSION_H

#include "Team.h"
#include <stdlib.h>
#include <time.h>

enum Session {PRACTICE, QUALIFYING, RACE};

struct FinishPosition {
    int car1;
    int car2;
};


class RaceSession {
    protected:
        RaceSession* next;

    public:
        virtual FinishPosition runSession(Team* team) = 0;        // simulate running of session
};

#endif
