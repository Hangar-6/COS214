#include "Equipment.h"

Container* Equipment::createContainer() {
    return new Container(this);
}