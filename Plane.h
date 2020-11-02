#ifndef PLANE_H
#define PLANE_H

#include "Logistics.h"

class Plane : public Logistics {
    public:
        void transport(RaceWeekend* race, Container* container);      // Plane used if EquipmentType = CAR
        virtual string getType();
};

#endif