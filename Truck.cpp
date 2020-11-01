
#include "Truck.h"
#include <iostream>

void Truck::transport(RaceWeekend *race, Container *container) {
    Location *raceLocation= race->getLocation();

    // better to change this to a switch
    if(container->getEquipment()->getType()==CAR)
    {
        cout<<"Cars can not be transported by truck, extreme caution must be taken!!!"<<endl;
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
        cout<<"The Truck transports equipment to the race track of the European race"<<endl;
        return;
    }

        cout<<"This is a non European race, therefore the container will have to be transported using a ship!"<<endl;

    if (next== nullptr)
    {
        cout<<"None of the vehicles in the chain of responsibility are able to transport the Container! Please purchase a Ship"<<endl;
        return;
    }
        next->transport(race,container);
        return;
}

string Truck::getType() {
    return "Truck";
}
