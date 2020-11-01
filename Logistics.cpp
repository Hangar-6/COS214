#include "Logistics.h"

Logistics::Logistics() : next(nullptr) {}

Logistics::~Logistics() {
    if(!next)
        delete next;
    next = nullptr;
}

void Logistics::addNext(Logistics* Vehicle) {
    if(next)
        next->addNext(Vehicle);
    else
        this->next = Vehicle;
}

void  Logistics::removeNext() {
    this->next = nullptr;
}