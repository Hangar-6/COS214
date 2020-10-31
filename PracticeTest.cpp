#include "PracticeTest.h"

using namespace std;

PracticeTest::PracticeTest() : Testing() {}

void PracticeTest::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult

    if(type == PRACTICE) {
        srand(time(NULL));
        int randomTest = rand() % 2;
        TestResult Result = static_cast<TestResult>(randomTest);
        ComponentType ComType;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Practice Test: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            ComType = Components[i]->getType();
            cout <<"Practice Test: ";
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
        cout<<"Practice Test: End"<<endl;
        notify(engineering, Result);
    }
        
    else if(next)
        next->test(engineering, type);
}
