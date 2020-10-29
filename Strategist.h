#ifndef STRATEGIST_H
#define STRATEGIST_H

#include "Car.h"
#include "RaceWeekend.h"
#include "AggressiveStrategy.h"

class Strategist {
    public:
        Strategist();
        void strategy(Car* car1, Car* car2, RaceWeekend* race);
        // Identifies RecommendedStrategy from RaceWeekend and
        // chooses appropriate strategy. Set each Car's vector<Tyre*>.
};

#endif
