#ifndef ENGINE_H    
#define ENGINE_H

#include "Component.h"

class Engine : public Component {
    public:
        Engine(BaseCar* car, int _performance);
        void add(Car* component);
        Car* clone();
};

#endif