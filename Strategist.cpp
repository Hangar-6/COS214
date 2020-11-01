#include "Strategist.h"

using namespace std;

void Strategist::strategy(Car* car1, Car* car2, RaceWeekend* race) {
    // rather implement using switch
    switch(race->getStrategy()) {
        case AGGRESSIVE:
            AggressiveStrategy* a = new AggressiveStrategy();
            static_cast<BaseCar*>(car1)->setTyres(a->strategy());
            static_cast<BaseCar*>(car2)->setTyres(a->strategy());
            break;
        case BALANCED:
            BalancedStrategy* b = new BalancedStrategy();
            static_cast<BaseCar*>(car1)->setTyres(b->strategy());
            static_cast<BaseCar*>(car2)->setTyres(b->strategy());
            break;
        case CONSERVATIVE:
            ConservativeStrategy* c = new ConservativeStrategy();
            static_cast<BaseCar*>(car1)->setTyres(c->strategy());
            static_cast<BaseCar*>(car2)->setTyres(c->strategy());
            break;
    }
}
