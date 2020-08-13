// DEFINITION :-26. Find the Addition of two numbers using Friend Function.
// ENROLLMENT NUMBER :- 190510101173
// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
#define PI 3.14
using namespace std;

class Operation {
    public:
        friend float Addition(float INTEGER_1 , float INTEGER_2);
};

float Addition(float INTEGER_1, float INTEGER_2) {
    return INTEGER_1 + INTEGER_2;    // Addition Of Two Numbers 
}

int main() {
    Operation FriendFuction;
    int USER_INPUT_1 , USER_INPUT_2;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;
    
    cout << "Enter The First Number : ";
    cin >> USER_INPUT_1;
    cout << "Enter The Second Number : ";
    cin >> USER_INPUT_2;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "The Addition Of Two Number is : " << Addition(USER_INPUT_1,USER_INPUT_2) << endl;

    cout << endl << "Thanks For Using My Program !" << endl;

    return 0;
}