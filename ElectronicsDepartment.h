#ifndef ELECTRONICSDEPARTMENT_H
#define ELECTRONICSDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Electronics.h"

class ElectronicsDepartment : public EngineeringDepartment {
public:
    ElectronicsDepartment(BaseCar* baseCar, int perf);
    Component* produce(int performance);

};

#endif