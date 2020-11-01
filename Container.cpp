#include "Container.h"

Container::Container(Equipment *_equipment) {
    equipment=_equipment;
}

Equipment *Container::getEquipment() {
    return equipment;
}
