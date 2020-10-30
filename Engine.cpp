#include "Engine.h"

Engine::Engine(BaseCar* car, int _performance) {
    baseCar=car;
    performance = _performance;
    maxPerformance = 30;
}

void Engine::add(Car *component) {
    baseCar->add(component);
}

Car * Engine::clone() {
    Engine* copy = new Engine(baseCar, performance);
    copy->maxPerformance = maxPerformance;
    return copy;
}