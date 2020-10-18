#ifndef RACEWEEKEND_H
#define RACEWEEKEND_H

#include "WeekendFactory.h"

class RaceWeekend {
    private:
        WeekendFactory* weekend;

    public:
        RaceWeekend(WeekendFactory* _weekend);
        std::string getType() { return weekend->getType(); }
        std::string getVenue() { return weekend->getVenue(); }
        std::string getLocation() { return weekend->getLocation(); }
};

#endif