#ifndef CHASSISDEPARTMENT_H
#define CHASSISDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Chassis.h"

class ChassisDepartment : public EngineeringDepartment {
    public:
        Component* produce();
};

#endif