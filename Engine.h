#ifndef ENGINE_H    
#define ENGINE_H

#include "Component.h"

class Engine : public Component {
    public:
        Engine(int _performance = 0);
        void add(Car* component);
        Car* clone();
        ComponentType getType();
};

#endif