#ifndef CHASSIS_H   
#define CHASSIS_H

#include "Component.h"

class Chassis : public Component {
    public:
        Chassis(int _performance = 0);
        void add(Car* component);
        Car* clone();
        ComponentType getType();
};

#endif