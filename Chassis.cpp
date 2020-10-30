#include "Chassis.h"

Chassis::Chassis(int _performance = 0) : Component(_performance) {}

void Chassis::add(Car *component) {
    baseCar->add(component);
}

Car* Chassis::clone() {
    return new Chassis(performance);
}

ComponentType Chassis::getType() {
    return CHASSIS;
}