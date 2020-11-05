#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "Container.h"

enum EquipmentType {GARAGE, CATERING, CAR};

class Equipment {
    public:
        virtual EquipmentType getType()=0;
        Container* createContainer();
};

#endif