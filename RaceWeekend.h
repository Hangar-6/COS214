#ifndef RACEWEEKEND_H
#define RACEWEEKEND_H

#include "Location.h"
#include "Team.h"
#include "RaceSession.h"

enum RecommendedStrategy {AGGRESSIVE, BALANCED, CONSERVATIVE};

class RaceWeekend {
    protected:
        Location* location;
        RecommendedStrategy* strategy;
        RaceSession* practice;
        RaceSession* qualifying;
        RaceSession* race;

    public:
        RaceWeekend(Location* _location);
        ~RaceWeekend();
        void enter(Team* team);
        int determinePoints(int position);
        void runSessions();
};

#endif