#include "Engine.h"

Engine::Engine(int _performance) : Component(_performance) {}

void Engine::add(Car *component) {
    baseCar->add(component);
}

Car * Engine::clone() {
    return new Engine(performance);;
}

ComponentType Engine::getType() {
    return ENGINE;
}