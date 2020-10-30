#ifndef ELECTRONICSDEPARTMENT_H
#define ELECTRONICSDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Electronics.h"

class ElectronicsDepartment : public EngineeringDepartment {
    public:
        ElectronicsDepartment();
        Component* produce(int performance = 0);
};

#endif