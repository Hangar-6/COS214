#ifndef ELECTRONICSDEPARTMENT_H
#define ELECTRONICSDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Electronics.h"

class ElectronicsDepartment : public EngineeringDepartment {
public:
    ElectronicsDepartment();
    Component* produce(int performance);
    void upgrade(int IncreaseAmount);
    void downgrade(int DecreaseAmount);
};

#endif