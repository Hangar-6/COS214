#ifndef STRATEGIST_H
#define STRATEGIST_H

#include "BaseCar.h"
#include "RaceWeekend.h"
#include "AggressiveStrategy.h"
#include "BalancedStrategy.h"
#include "ConservativeStrategy.h"

class RaceWeekend;

class Strategist {
    public:
        void strategy(Car* car1, Car* car2, RaceWeekend* race);
        // Identifies RecommendedStrategy from RaceWeekend and
        // chooses appropriate strategy. Set each Car's vector<Tyre*>.
};

#endif
