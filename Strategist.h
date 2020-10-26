#ifndef STRATEGIST_H
#define STRATEGIST_H

#include "Car.h"
#include "RaceWeekend.h"
#include "AggressiveStrategy.h"

class Strategist {
    public:
        void strategy(Car* car1, Car* car2, RaceWeekend* race);
};

#endif