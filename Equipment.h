//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_EQUIPMENT_H
#define COS214_EQUIPMENT_H
#include "Equipment"

class Equipment {
private:
  string EquipmentName;
  final string EquipmentType;
  int quantity;

public:
  Equipment();
  void setName(string n);
  string getName();
  int getQuantity();
  void decrementQuantity();
  void incrementQuantity();
  bool isEmpty();
  void showTypeAndQuantity(); // Template method that calls getType and getQuantity...
  virtual string getType()=0;
};


#endif //COS214_EQUIPMENT_H
