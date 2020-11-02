#ifndef CHASSISDEPARTMENT_H
#define CHASSISDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Chassis.h"

class ChassisDepartment : public EngineeringDepartment {
    public:
        ChassisDepartment();
        ~ChassisDepartment();
        Component* produce(int performance = 0);
};

#endif