
#include "Plane.h"
#include <iostream>

void Plane::transport(RaceWeekend *race, Container *container) {
    Location *raceLocation= race->getLocation();

    if(container->getEquipment()->getType()==CAR)
    {
        cout<<"The Car is transported by a plane with extreme caution!"<<endl;
        return;
    }

    if (raceLocation->getLocation()==EUROPEAN)
    {
        cout<<"In a European race, a Plane will not be used to transport the container!"<<endl;

        if (next== nullptr)
        {
            cout<<"Non of the vehicles in the chain of responsibility is able to transport the container! Please purchase a Truck"<<endl;
            return;
        }
        next->transport(race,container);
        return;
    }

    cout<<"Planes are only responsible for transporting cars, the next vehicle type will try to transport the container!"<<endl;
    if (next== nullptr)
    {
        cout<<"Non of the vehicles in the chain of responsibility is able to transport the container! Please purchase a Ship"<<endl;
        return;
    }
    next->transport(race,container);

}

string Plane::getType() {
    return "Plane";
}
