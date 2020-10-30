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

        AerodynamicsDepartment* aeroDep2;
        ChassisDepartment* chassisDep2;
        ElectronicsDepartment* electronicsDep2;
        EngineDepartment* engineDep2;

        BaseCar* baseCar1;
        BaseCar* baseCar2;

        vector<Component*> components1;
        vector<Component*> components2;

        int aeroP, chasP, electronicsP, engineP; //Performance

    public:
        Engineering(BaseCar *car1, BaseCar *car2);                      // creates Departments
        virtual ~Engineering();             // deletes departments and components
        vector<Component*> getComponents();
        void upgrade(TestResult result);       // creates new Component with new performance value if result is UPGRADE
        void buildCars();   // clones components and adds them to the cars
        void disassemble(BaseCar* car1, BaseCar* car2);     // clears vector<Component*> of cars
        virtual void buildComponents() = 0;     // uses departments to create components and puhes into vector<Component*>
        void service(BaseCar* car1, BaseCar* car2);     // service both cars
};

#endif
