#include "Car.h"

Car::~Car() {}

int Car::getPerformance() {
    return performance;
}

void Car::repair() {
    reliability = 100;
}