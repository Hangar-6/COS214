#ifndef TRUCK_H
#define TRUCK_H

#include "Logistics.h"

class Truck : public Logistics {
    public:
        void transport(RaceWeekend* race);
};

#endif