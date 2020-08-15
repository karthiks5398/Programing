// DEFINITION :-25. Find the Area of circle using Friend Function.

// THIS CODE IS WRITTEN IN VS CODE 


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

    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;
    
    cout << "Enter The Radius Of Circle : ";
    cin >> USER_INPUT;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "The Area Of Circle is : " << AreaOfCircle(USER_INPUT) << endl;

    cout << endl << "Thanks For Using My Program !" << endl;

    return 0;
}