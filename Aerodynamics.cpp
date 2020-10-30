#include "Aerodynamics.h"

Aerodynamics::Aerodynamics(BaseCar *car, int _performance){
    baseCar = car;
    performance = _performance;
    maxPerformance = 30;
}

void Aerodynamics::add(Car *component) {
    //ADD TO BASE
    baseCar->add(component);
}

Car * Aerodynamics::clone() {
    Aerodynamics* copy = new Aerodynamics(baseCar, performance);
    copy->maxPerformance = maxPerformance;
    return copy;
    //RETURN CLONE OF THIS COMPONENT
}
