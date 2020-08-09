// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :-11. Even or odd. Program to enter an integer and find out if it is even or odd

#include<iostream>
using namespace std;

int main() {

    int VALUE , REMAINDER;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

    cout << "Enter The VALUE : ";
    cin >> VALUE;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    REMAINDER = VALUE % 2;

    if(REMAINDER == 0) {
        cout << VALUE << " is Even !! " << endl;
    }
    else {
        cout << VALUE << " is Odd !! " << endl;
    }

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    
    return 0;
}