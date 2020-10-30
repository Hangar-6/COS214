#include "Engine.h"

Engine::Engine(int _performance) {
    performance = _performance;
    maxPerformance = 30;
}

void Engine::add(Car *component) {
    baseCar->add(component);
}

Car * Engine::clone() {
    Engine* copy = new Engine(baseCar);
    copy->maxPerformance = maxPerformance;
    copy->performance = performance;
    return copy;
}