#include "Component.h"

Component::Component() {}

int Component::getMaxPerformance() {
    return maxPerformance;
}

int Component::getPerformance() {
    return performance;
}

void Component::setPerformance(int perf) {
    performance = perf;
}

