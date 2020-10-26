#ifndef SHIP_H
#define SHIP_H

#include "Logistics.h"

class Ship : public Logistics {
    public:
        void transport(RaceWeekend* race);
};

#endif