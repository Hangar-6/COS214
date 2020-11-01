
#include "Ship.h"
#include <iostream>

void Ship::transport(RaceWeekend *race, Container *container) {
    Location* raceLocation= race->getLocation();

    if(container->getEquipment()->getType()==CAR)
    {
        cout<<"Cars can not be transported by ship, extreme caution must be taken, make use of a plane!!!"<<endl;
        if (next== nullptr)
        {
            cout<<"None of the vehicles in the chain of responsibility are able to transport the Car! Please purchase a Plane"<<endl;
            return;
        }
        next->transport(race,container);
        return;
    }

    if (raceLocation->getLocation()==EUROPEAN)
    {
        cout<<"In a European race, a Ship will not be used to transport the container!"<<endl;
        if (next== nullptr)
        {
            cout<<"None of the vehicles in the chain of responsibility are able to transport the container! Please purchase a Truck"<<endl;
            return;
        }

        next->transport(race,container);
        return;
    }

    cout<<"The ship transports the equipment as this is a NON European race!"<<endl;
}

string Ship::getType() {
    return "Ship";
}
