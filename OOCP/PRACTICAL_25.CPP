// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :-25. Find the Area of circle using Friend Function.

#include<iostream>
#define PI 3.14
using namespace std;

class Operation {
    public:
        friend float AreaOfCircle(float);
};

float AreaOfCircle(float Radius) {
    return PI * Radius * Radius;   // Area Of Circle
}

int main() {
    Operation FriendFuction;
    float USER_INPUT;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;
    
    cout << "Enter The Radius Of Circle : ";
    cin >> USER_INPUT;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "The Area Of Circle is : " << AreaOfCircle(USER_INPUT) << endl;

    cout << endl << "Thanks For Using My Program !" << endl;

    return 0;
}