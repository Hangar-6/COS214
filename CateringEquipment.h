//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_CATERINGEQUIPMENT_H
#define COS214_CATERINGEQUIPMENT_H
#include "Equipment"

class CateringEquipment: public Equipment {
private:

public:
  CateringEquipment(string equipmentType);
  string getType();
};


#endif //COS214_CATERINGEQUIPMENT_H
