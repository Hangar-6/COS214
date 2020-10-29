#ifndef CONTAINER_H
#define CONTAINER_H

#include "Equipment.h"

class Container {
    private:
        Equipment* equipment;

    public:
        Container(Equipment* _equipment);
        Equipment* getEquipment();
};

#endif