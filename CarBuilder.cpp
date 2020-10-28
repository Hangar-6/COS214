#include "CarBuilder.h"

CarBuilder::~CarBuilder() {
    car = nullptr;
}

void CarBuilder::build() {
    car = new BaseCar();
}

Car* CarBuilder::getCar() {
    return car;
}
