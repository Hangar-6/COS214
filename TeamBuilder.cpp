#include "TeamBuilder.h"

Team* TeamBuilder::build(string name) {
    Team* team = new Team(name);
    team->setCar(new BaseCar());
    team->setEngineers(new CurrentEngineering(), new NextEngineering());
    team->setStrategist(new Strategist());
    // team->setTesting(new Testing());
    // team->setLogistics(new Logistics())

    return team;
}