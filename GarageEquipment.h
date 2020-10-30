#ifndef GARAGEEQUIPMENT_H
#define GARAGEEQUIPMENT_H

#include "Equipment.h"

class GarageEquipment : public Equipment {
    public:
        GarageEquipment();
        virtual EquipmentType getType();
};

#endif