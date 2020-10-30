#ifndef EQUIPMENT_H
#define EQUIPMENT_H

enum EquipmentType {GARAGE, CATERING, CAR};

class Equipment {

    public:
        Equipment();
        virtual EquipmentType getType()=0;
};

#endif