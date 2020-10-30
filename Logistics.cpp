#include "Logistics.h"

void  Logistics::addNext(Logistics* Vehicle)
{
    this->next=Vehicle;
}

void  Logistics::removeNext()
{
    this->next=nullptr;
}