#ifndef ENGINEERING_H
#define ENGINEERING_H

#include "AerodynamicsDepartment.h"
#include "ChassisDepartment.h"
#include "ElectronicsDepartment.h"
#include "EngineDepartment.h"
#include "Testing.h"
#include "BaseCar.h"
#include "Aerodynamics.h"
#include "Engine.h"
#include "Chassis.h"
#include "Electronics.h"
#include <vector>

class Engineering {
    protected:
        int windTunnelRuns;
        AerodynamicsDepartment* aeroDep;
        ChassisDepartment* chassisDep;
        ElectronicsDepartment* electronicsDep;
        EngineDepartment* engineDep;

        vector<Component*> components;

    public:
        Engineering();                      // creates Departments
        virtual ~Engineering();             // deletes departments and components
        vector<Component*> getComponents();
        void upgrade(TestResult result);       // creates new Component with new performance value if result is UPGRADE
        void buildCars(BaseCar* car1, BaseCar* car2);   // clones components and adds them to the cars
        void disassemble(BaseCar* car1, BaseCar* car2);     // clears vector<Component*> of cars
        virtual void buildComponents() = 0;     // uses departments to create components and puhes into vector<Component*>
        void service(BaseCar* car1, BaseCar* car2);     // service both cars
};

#endif
