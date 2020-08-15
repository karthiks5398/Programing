// DEFINITION :-22. Calculate the area of circle using default value in argument.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
#define PI 3.14
using namespace std;

float AreaOfCircle(float Radius = 15) {
    return PI * Radius * Radius;
}

int main() {
    // float USER_INPUT;

    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

    // cout << "Enter The Radius : ";
    // cin >> USR_INPUT;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "The Default Area Of Circle is : " << AreaOfCircle() << endl; 
    // cout << "The Area Of Circle is : " << AreaOfCircle(USER_INPUT) << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;
}