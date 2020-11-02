#ifndef ENGINEERING_H
#define ENGINEERING_H

#include "AerodynamicsDepartment.h"
#include "ChassisDepartment.h"
#include "ElectronicsDepartment.h"
#include "EngineDepartment.h"
#include "Testing.h"
#include "BaseCar.h"
#include <vector>
#include <iostream>

using namespace std;

class Engineering {
    protected:
        int windTunnelRuns;
        vector<Component*> components;

        AerodynamicsDepartment* aeroDep;
        ChassisDepartment* chassisDep;
        ElectronicsDepartment* electronicsDep;
        EngineDepartment* engineDep;
        
    public:
        Engineering();                      // creates Departments
        virtual ~Engineering();             // deletes departments and and clears components
        vector<Component*> getComponents();
        void upgrade(TestResult result, ComponentType component);       // creates new Component with new performance value if result is UPGRADE
        void buildCars(Car* car1, Car* car2);   // clones components and adds them to the cars
        void disassemble(Car* car1, Car* car2);     // calls clearComponents() of each car
        virtual void buildComponents() = 0;     // uses departments to create components and pushes into vector<Component*>
        void service(Car* car1, Car* car2);     // service both cars
        int getWindTunnelRuns();
        void setWindTunnelRuns(int runs);
};

#endif
