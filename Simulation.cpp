#include "Simulation.h"
#include <iostream>
#include <vector>

using namespace std;

Simulation::Simulation() {
    //TestType ThisTest = PRACTICE;
}

void Simulation::test(Engineering* engineering, TestType type) {
    TestType ThisTest = SIMULATION;
    //if (type != "PRACTICE" || type != 2)
    if (type != ThisTest)
        this->next->test(engineering, type);
    else{
        TestResult PTResult;
        PTResult = NOCHANGE;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Simulation: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            if (Components.at(i)==Aerodynamics){
                cout<<"Simulation: Aerodynamics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Simulation: Aerodynamics failed..."<<endl;
                }
                else
                    cout<<"Simulation: Aerodynamics passed..."<<endl;
            }
            if (Components.at(i)==Electronics){
                cout<<"Simulation: Electronics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Simulation: Electronics failed..."<<endl;
                }
                else
                    cout<<"Simulation: Electronics passed..."<<endl;
            }
            if (Components.at(i)==Engine){
                cout<<"Simulation: Engine testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Simulation: Engine failed..."<<endl;
                }
                cout<<"Simulation: Engine passed..."<<endl;
            }
            if (Components.at(i)==Chassis){
                cout<<"Simulation: Chassis testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Simulation: Chassis failed..."<<endl;
                }
                else
                    cout<<"Simulation: Chassis passed..."<<endl;
            }
        }
        cout<<"Simulation: End"<<endl;
        notify(engineering, PTResult);
    }
}