#include "Aerodynamics.h"

Aerodynamics::Aerodynamics(int _performance) {
    performance = _performance;
    maxPerformance = 30;
}

void Aerodynamics::add(Car *component) {
    //ADD TO BASE
    baseCar->add(component);
}

Car * Aerodynamics::clone() {
    Aerodynamics* copy = new Aerodynamics(baseCar);
    copy->maxPerformance = maxPerformance;
    copy->performance = performance;
    return copy;
    //RETURN CLONE OF THIS COMPONENT
}
