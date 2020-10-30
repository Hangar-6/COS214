
#include "Equipment.h"
#include "CarAdapter.h"

EquipmentType CarAdapter::getType() {
    return CAR;
}

CarAdapter::CarAdapter(Car *passedInCar) {
    car=passedInCar;
}

Car *CarAdapter::getCar() {
    return car;
}
