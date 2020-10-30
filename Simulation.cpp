#include "Simulation.h"


using namespace std;

Simulation::Simulation() : Testing() {}

void Simulation::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult

    if(type == SIMULATION) {
        TestResult result;
        result = NOCHANGE;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Simulation: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            if (Components.at(i)==Aerodynamics){
                cout<<"Simulation: Aerodynamics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Simulation: Aerodynamics failed..."<<endl;
                }
                else
                    cout<<"Simulation: Aerodynamics passed..."<<endl;
            }
            if (Components.at(i)==Electronics){
                cout<<"Simulation: Electronics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Simulation: Electronics failed..."<<endl;
                }
                else
                    cout<<"Simulation: Electronics passed..."<<endl;
            }
            if (Components.at(i)==Engine){
                cout<<"Simulation: Engine testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Simulation: Engine failed..."<<endl;
                }
                cout<<"Simulation: Engine passed..."<<endl;
            }
            if (Components.at(i)==Chassis){
                cout<<"Simulation: Chassis testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Simulation: Chassis failed..."<<endl;
                }
                else
                    cout<<"Simulation: Chassis passed..."<<endl;
            }
        }
        cout<<"Simulation: End"<<endl;
        notify(engineering, result);
    }

    else if(next)
        next->test(engineering, type);
}