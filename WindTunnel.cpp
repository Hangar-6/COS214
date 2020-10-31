#include "WindTunnel.h"

using namespace std;

WindTunnel::WindTunnel() : Testing() {}

void WindTunnel::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult
    // decrement Engineering' windTunnelRuns after every test

    if(type == WINDTUNNEL) {
        srand(time(NULL));
        int randomTest = rand() % 2;
        TestResult Result = static_cast<TestResult>(randomTest);
        ComponentType ComType;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Wind Tunnel Test: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            ComType = Components[i]->getType();
            cout <<"Wind Tunnel Test: ";
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
        cout<<"Wind Tunnel Test: End"<<endl;
        engineering->setWindTunnelRuns((engineering->getWindTunnelRuns()-1));
        notify(engineering, Result);
    }
        
    else if(next) 
        next->test(engineering, type);
}