#include "Component.h"

Component::Component(int perf) : Car() {
    performance = perf;
    baseCar = nullptr;
}

Component::~Component() {
    baseCar = nullptr;
}

int Component::getPerformance() {
    return performance;
}

void Component::setPerformance(int perf) {
    performance = perf;
}

void Component::setBaseCar(Car *car) {
    baseCar = car;
}
