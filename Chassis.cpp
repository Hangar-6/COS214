#include "Chassis.h"

Chassis::Chassis(int _performance) {
    performance = _performance;
    maxPerformance = 30;
}

void Chassis::add(Car *component) {
    baseCar->add(component);
}

Car * Chassis::clone() {
    Chassis* copy = new Chassis(baseCar);
    copy->maxPerformance = maxPerformance;
    copy->performance = performance;
    return copy;
}