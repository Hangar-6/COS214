#include "NextEngineering.h"

NextEngineering::NextEngineering() : Engineering() {}

NextEngineering::~NextEngineering() {}

void NextEngineering::buildComponents() {
    /** CREATE COMPONENT AND ADD TO VECTOR**/

    components.push_back(aeroDep->produce());
    components.push_back(engineDep->produce());
    components.push_back(electronicsDep->produce());
    components.push_back(chassisDep->produce());
}