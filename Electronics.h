#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Component.h"

class Electronics : public Component {
    public:
        Electronics(BaseCar* car, int _performance);
        void add(Car* component);
        Car* clone();
};

#endif