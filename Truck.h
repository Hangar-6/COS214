#ifndef TRUCK_H
#define TRUCK_H

#include "Logistics.h"

class Truck : public Logistics {
    public:
        void transport(RaceWeekend* race, Container* container);        // Truck used if LocationType is EUROPEAN
        virtual string getType();
};

#endif