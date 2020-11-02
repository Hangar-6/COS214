#ifndef CATERINGEQUIPMENT_H
#define CATERINGEQUIPMENT_H

#include "Equipment.h"

class CateringEquipment : public Equipment {
    public:
        virtual EquipmentType getType();
};

#endif