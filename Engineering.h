//
// Created by Luca Azmanov on 2020/10/17.
//

#ifndef COS214_ENGINEERING_H
#define COS214_ENGINEERING_H
#include "EngineDep.h"
#include "AeroDynamicsDep.h"
#include "ElectronicsDep.h"
#include "ChassisDep.h"

class Engineering {

private:
  EngineDep* myEngineDepartment;
  AerodynamicsDep* myAeroDynamicsDep;
  ElectronicsDep* myElectronicsDep;
  ChassisDep* myChassisDep;

public:
  Engineering(EngineDep* engine,AerodynamicsDep* aeroDynamic,ElectronicsDep* electronic,ChassisDep* chassis);



};


#endif //COS214_ENGINEERING_H
