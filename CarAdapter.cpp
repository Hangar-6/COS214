#include "CarAdapter.h"

CarAdapter::CarAdapter(Car *passedInCar) : Equipment() {
    car = passedInCar;
}

EquipmentType CarAdapter::getType() {
    return CAR;
}

Car *CarAdapter::getCar() {
    return car;
}
