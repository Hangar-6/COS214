#include "Plane.h"
#include <iostream>

void Plane::transport(RaceWeekend *race, Container *container) {
    if (!race)
    {
        cout<<"The container is transported back to the factory"<<endl;
        return;
    }
    Location *raceLocation= race->getLocation();

    if(container->getEquipment()->getType()==CAR)
    {
        cout<<"The Car is transported by a plane with extreme caution!"<<endl;
        return;
    }
    next->transport(race,container);
    return;

}

string Plane::getType() {
    return "Plane";
}
