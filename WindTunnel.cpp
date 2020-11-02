#include "WindTunnel.h"

using namespace std;

WindTunnel::~WindTunnel() {}

void WindTunnel::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult
    // decrement Engineering' windTunnelRuns after every test

    if(type == WINDTUNNEL) {
        srand(time(NULL));
        int randomTest = rand() % 3;
        TestResult Result = static_cast<TestResult>(randomTest);
        vector<Component*> Components = engineering->getComponents();
        cout<<"Wind Tunnel Test: Start..."<<endl;

        for (int i = 0; i < Components.size(); i++){
            ComponentType ComType = Components[i]->getType();
            switch (ComType){
                case AERODYNAMICS:
                    cout<<"Aerodynamics testing in progress..."<<endl;
                    notify(engineering, Result, AERODYNAMICS);
                    break;
                case CHASSIS:
                    cout<<"Chassis testing in progress..."<<endl;
                    notify(engineering, Result, CHASSIS);
                    break;
                case ELECTRONICS:
                    cout<<"Electronics testing in progress..."<<endl;
                    notify(engineering, Result, ELECTRONICS);
                    break;
                case ENGINE:
                    cout<<"Engine testing in progress..."<<endl;
                    notify(engineering, Result, ENGINE);
                    break;
                default:
                    cout<<"Unknown component in testing..."<<endl;
                    break;
            }
        }
        cout<<"Wind Tunnel Test: End"<<endl;
        engineering->setWindTunnelRuns((engineering->getWindTunnelRuns()-1));
    }
        
    else if(next) 
        next->test(engineering, type);
}