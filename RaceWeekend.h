#ifndef RACEWEEKEND_H
#define RACEWEEKEND_H

#include "Location.h"
#include "Team.h"
#include "RaceSession.h"

enum RecommendedStrategy {AGGRESSIVE, BALANCED, CONSERVATIVE};

class RaceWeekend {
    protected:
        Location* location;
        RecommendedStrategy strategy;
        RaceSession* practice;
        RaceSession* qualifying;
        RaceSession* race;

    public:
        RaceWeekend(Location* _location);
        ~RaceWeekend();
        int determineTeamPoints(FinishPosition positions);      // set Team's points to total points scored
        int determineDriverPoints(int position);      // set driver's points to total points scored
        void runSessions(Team* team);                       // run practice, qualifying and race and determine points after race
        Location* getLocation();
};

#endif
