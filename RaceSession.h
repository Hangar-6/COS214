#ifndef RACESESSION_H
#define RACESESSION_H

#include "Team.h"

enum Session {PRACTICE, QUALIFYING, RACE};

class RaceSession {
    protected:
        RaceSession* next;

    public:
        virtual int runSession(Session session, Team team) = 0;
};

#endif