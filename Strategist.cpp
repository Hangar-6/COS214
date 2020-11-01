#include "Strategist.h"

using namespace std;

Strategist::Strategist(){}

void Strategist::strategy(Car* car1, Car* car2, RaceWeekend* race) {
    // rather implement using switch
    switch(race->getStrategy()) {
        case AGGRESSIVE:
            AggressiveStrategy* a = new AggressiveStrategy();
            car1->setTyres(a->strategy());
            car2->setTyres(a->strategy());
            break;
        case BALANCED:
            BalancedStrategy* b = new BalancedStrategy();
            car1->setTyres(b->strategy());
            car2->setTyres(b->strategy());
            break;
        case CONSERVATIVE:
            ConservativeStrategy* c = new ConservativeStrategy();
            car1->setTyres(c->strategy());
            car2->setTyres(c->strategy());
            break;
    }
}
