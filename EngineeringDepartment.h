#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

#include "Component.h"

class EngineeringDepartment {
    public:
        virtual Component* produce(int performance) = 0;
};

#endif