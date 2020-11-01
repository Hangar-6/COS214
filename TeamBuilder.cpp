#include "TeamBuilder.h"

Team* TeamBuilder::build(string name) {
    Team* team = new Team(name);
    team->setCar(new BaseCar());
    team->setEngineers(new CurrentEngineering(), new NextEngineering());
    team->setStrategist(new Strategist());
    team->setEquipment(new GarageEquipment(), new CateringEquipment());

    Logistics* truck = new Truck(); 
    Logistics* ship = new Ship(); 
    Logistics* plane = new Plane(); 
    truck->addNext(ship);
    ship->addNext(plane);
    plane->addNext(nullptr);
    team->setLogistics(truck);

    Testing* windtunnel = new WindTunnel();
    Testing* simulation = new Simulation();
    Testing* practice = new PracticeTest();
    windtunnel->addNext(simulation);
    simulation->addNext(practice);
    practice->addNext(nullptr);
    team->setTesting(windtunnel);

    return team;
}