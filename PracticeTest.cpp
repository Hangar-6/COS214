#include "PracticeTest.h"

using namespace std;

PracticeTest::PracticeTest() : Testing() {}

void PracticeTest::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult

    if(type == PRACTICE) {
        srand(time(NULL));
        int randomTest = rand() % 3;
        TestResult Result = static_cast<TestResult>(randomTest);
        ComponentType ComType;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Practice Test: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            ComType = Components[i]->getType();
            cout <<"Practice Test: ";
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
        cout<<"Practice Test: End"<<endl;
    }
        
    else if(next)
        next->test(engineering, type);
}
