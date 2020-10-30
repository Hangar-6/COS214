
#include "Truck.h"
#include <iostream>

void Truck::transport(RaceWeekend *race, Container *container) {
    Location *raceLocation= race->getLocation();

    if(container->getEquipment()->getType()==CAR)
    {
        cout<<"Cars can not be transported by truck, extreme caution must be taken!!!"<<endl;
        if (next== nullptr)
        {
            cout<<"Non of the vehicles in the chain of responsibility is able to transport the Car! Please purchase a Plane"<<endl;
            return;
        }
        next->transport(race,container);
        return;
    }

    if (raceLocation->getLocation()==EUROPEAN)
    {
        cout<<"The Truck transports equipment to the race track of the European race"<<endl;
    }

        cout<<"This is a non European race, therefore the container will have to be transported using a ship!"<<endl;

    if (next== nullptr)
    {
        cout<<"Non of the vehicles in the chain of responsibility is able to transport the Container! Please purchase a Ship"<<endl;
        return;
    }
        next->transport(race,container);
        return;
}

string Truck::getType() {
    return "Truck";
}
