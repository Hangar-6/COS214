#include "Simulation.h"


using namespace std;

Simulation::Simulation() : Testing() {}

void Simulation::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult

    if(type == SIMULATION) {
        srand(time(NULL));
        int randomTest = rand() % 2;
        TestResult Result = static_cast<TestResult>(randomTest);
        ComponentType ComType;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Simulation: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            ComType = Components[i]->getType();
            cout <<"Simulation: ";
            switch (ComType){
                case 0:
                    cout<<"Aerodynamics testing in progress..."<<endl;
                    break;
                case 1:
                    cout<<"Chassis testing in progress..."<<endl;
                    break;
                case 2:
                    cout<<"Electronics testing in progress..."<<endl;
                    break;
                case 3:
                    cout<<"Engine testing in progress..."<<endl;
                    break;
                default:
                    cout<<"Unknown component in testing..."<<endl;
                    break;
            }
        }
        cout<<"Simulation: End"<<endl;
        notify(engineering, Result);
    }

    else if(next)
        next->test(engineering, type);
}