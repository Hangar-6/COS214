#ifndef EQUIPMENT_H
#define EQUIPMENT_H

enum EquipmentType {GARAGE, CATERING, CAR};

class Equipment {
    protected:
        EquipmentType type;

    public:
        Equipment(EquipmentType _type);
        EquipmentType getType();
};

#endif