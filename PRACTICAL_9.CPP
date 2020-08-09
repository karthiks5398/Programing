// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :-9. Find the cube of number using “INLINE” function.

#include<iostream>
using namespace std;

inline int cube(int VALUE) {
    return VALUE * VALUE * VALUE;
}

int main () {
    int VALUE;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

    cout << "Enter the value : ";
    cin >> VALUE;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "Your CUBE is : " << cube(VALUE) << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    
    return 0;
}