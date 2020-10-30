#include "Chassis.h"

Chassis::Chassis(BaseCar* car,int _performance) {
    baseCar=car;
    performance = _performance;
    maxPerformance = 30;
}

void Chassis::add(Car *component) {
    baseCar->add(component);
}

Car * Chassis::clone() {
    Chassis* copy = new Chassis(baseCar, performance);
    copy->maxPerformance = maxPerformance;
    return copy;
}