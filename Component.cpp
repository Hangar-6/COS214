#include "Component.h"

Component::Component(int perf = 0) {
    performance = perf;
    baseCar = nullptr;
}

Component::~Component() {
    // DEALLOCATE baseCar
    // never delete baseCar, Team owns and deletes baseCar
}

int Component::getPerformance() {
    return performance;
}

void Component::setPerformance(int perf) {
    performance = perf;
}

