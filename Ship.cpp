
#include "Ship.h"
#include <iostream>

void Ship::transport(RaceWeekend *race, Container *container) {
    if(!race) {
        cout<<"None of the vehicles in the chain of responsibility are able to transport the container! Please purchase a Truck"<<endl;
            return;
    }
    Location* raceLocation= race->getLocation();

    if (raceLocation->getLocation()==NONEUROPEAN && container->getEquipment()->getType() != CAR)
    {
        cout<<"The ship transports the equipment as this is a NON European race!"<<endl;
        return;
    }
    if(next)
        next->transport(race,container);
}

string Ship::getType() {
    return "Ship";
}
