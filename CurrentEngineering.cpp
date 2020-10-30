#include "CurrentEngineering.h"

void CurrentEngineering::buildComponents(){
    /** CREATE COMPONENT AND ADD TO VECTOR**/

    aeroDep->produce(aeroP);
    engineDep->produce(engineP);
    electronicsDep->produce(electronicsP);
    chassisDep->produce(chasP);

    components1[0] = aeroDep->getComponent();
    components1[1] = engineDep->getComponent();
    components1[2] = electronicsDep->getComponent();
    components1[3] = chassisDep->getComponent();

    aeroDep2->produce(aeroP);
    engineDep2->produce(engineP);
    electronicsDep2->produce(electronicsP);
    chassisDep2->produce(chasP);

    components2[0] = aeroDep2->getComponent();
    components2[1] = engineDep2->getComponent();
    components2[2] = electronicsDep2->getComponent();
    components2[3] = chassisDep2->getComponent();
}
