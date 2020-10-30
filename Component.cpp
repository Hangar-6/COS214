#include "Component.h"

Component::Component() {}

Component::~Component(){
    //DEALLOCATE baseCar
    delete baseCar;
}

int Component::getMaxPerformance() {
    return maxPerformance;
}

int Component::getPerformance() {
    return performance;
}

void Component::setPerformance(int perf) {
    performance = perf;
}

