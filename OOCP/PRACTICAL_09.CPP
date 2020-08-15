// Definition :-9. Find the cube of number using “INLINE” function.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

inline int cube(int VALUE) {
    return VALUE * VALUE * VALUE;
}

int main () {
    int VALUE;

    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

    cout << "Enter the value : ";
    cin >> VALUE;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "Your CUBE is : " << cube(VALUE) << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    
    return 0;
}
