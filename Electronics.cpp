#include "Electronics.h"

Electronics::Electronics(BaseCar* car, int _performance) {
    baseCar=car;
    performance = _performance;
    maxPerformance = 10;
}

void Electronics::add(Car *component) {
    baseCar->add(component);
}

Car * Electronics::clone() {
    Electronics* copy = new Electronics(baseCar, performance);
    copy->maxPerformance = maxPerformance;
    return copy;
}