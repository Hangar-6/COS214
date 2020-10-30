#include "Aerodynamics.h"

Aerodynamics::Aerodynamics(int _performance = 0) : Component(_performance) {}

void Aerodynamics::add(Car *component) {
    //ADD TO BASE
    baseCar->add(component);
}

Car* Aerodynamics::clone() {
    return new Aerodynamics(performance);
    //RETURN CLONE OF THIS COMPONENT
}

ComponentType Aerodynamics::getType() {
    return AERODYNAMICS;
}
