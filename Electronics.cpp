#include "Electronics.h"

Electronics::Electronics(int _performance) {
    performance = _performance;
    maxPerformance = 10;
}

void Electronics::add(Car *component) {
    baseCar->add(component);
}

Car * Electronics::clone() {
    Electronics* copy = new Electronics(baseCar);
    copy->maxPerformance = maxPerformance;
    copy->performance = performance;
    return copy;
}