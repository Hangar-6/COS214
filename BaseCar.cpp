#include "BaseCar.h"

BaseCar::BaseCar() : Car() {
    performance = 0;
}


void BaseCar::add(Car *component) {
    //Add component to vector
    //Add performance to base performance
}

Car * BaseCar::clone() {
    //return new basecar clone
}

void BaseCar::setTyres(vector<Tyre *> _tyres) {
    //set tyres vector
}