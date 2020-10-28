#ifndef CHASSIS_H   
#define CHASSIS_H

#include "Component.h"

class Chassis : public Component {
    public:
        Chassis(int _performance);
        void add(Car* component);
        Car* clone();
};

#endif