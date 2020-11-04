
#include "Truck.h"
#include <iostream>

void Truck::transport(RaceWeekend *race, Container *container) {
    if (!race)
    {
        cout<<"The container is transported back to the factory"<<endl;
        return;
    }
    Location *raceLocation= race->getLocation();

    // better to change this to a switch
    if (raceLocation->getLocation()==EUROPEAN && container->getEquipment()->getType() != CAR)
    {
        cout<<"The Truck transports equipment to the race track of the European race"<<endl;
        return;
    }
    if(next)
        next->transport(race,container);
}

string Truck::getType() {
    return "Truck";
}
