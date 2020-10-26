#ifndef ENGINEERING_H
#define ENGINEERING_H

#include "AerodynamicsDepartment.h"
#include "ChassisDepartment.h"
#include "ElectronicsDepartment.h"
#include "EngineDepartment.h"
#include "Testing.h"
#include "Car.h"
#include <vector>

class Engineering {
    protected:
        int windTunnelRuns; 
        AerodynamicsDepartment* aeroDep;
        ChassisDepartment* chassisDep;
        ElectronicsDepartment electronicsDep;
        EngineDepartment* engineDep;

        vector<Component*> components;

    public:
        Engineering();
        virtual ~Engineering();
        vector<Component*> getComponents();
        void upgrade(TestResult result);
        void buildCars(Car* car1, Car* car2);
        void dissasemble(Car* car1, Car* car2);
        virtual void buildComponents() = 0;
        void service(Car* car1, Car* car2);
};

#endif