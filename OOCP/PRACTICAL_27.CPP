// DEFINITION :-27. Find the area of circle and assign the value of pie in constructor.
// ENROLLMENT NUMBER :- 190510101173
// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class Operation {
    float PI;
    public:
        Operation() : PI{3.14} {};      // Defining PI Value In Constructor

        float AreaOfCircle(float Radius) {
            return PI * Radius * Radius;   // Area Of Circle
        }
        
};

int main() {
    Operation Tofind;
    float USER_INPUT;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;
    
    cout << "Enter The Radius Of Circle : ";
    cin >> USER_INPUT;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "The Area Of Circle is : " << Tofind.AreaOfCircle(USER_INPUT) << endl;

    cout << endl << "Thanks For Using My Program !" << endl;

    return 0;
} 