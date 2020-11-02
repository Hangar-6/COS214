#include "CurrentEngineering.h"

CurrentEngineering::CurrentEngineering() : Engineering() {}

CurrentEngineering::~CurrentEngineering() {}

void CurrentEngineering::buildComponents(){
    /** CREATE COMPONENT AND ADD TO VECTOR**/

    components.push_back(aeroDep->produce());
    components.push_back(engineDep->produce());
    components.push_back(electronicsDep->produce());
    components.push_back(chassisDep->produce());
}
