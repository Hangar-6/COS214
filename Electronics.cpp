#include "Electronics.h"

Electronics::Electronics(int _performance) : Component(_performance) {}

void Electronics::add(Car *component) {
    baseCar->add(component);
}

Car * Electronics::clone() {
    return new Electronics(performance);;
}

ComponentType Electronics::getType() {
    return ELECTRONICS;
}