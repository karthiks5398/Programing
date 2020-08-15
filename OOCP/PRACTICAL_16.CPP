// DEFINITION :-16. Biggest integer using IF. Program to enter three integers and output the biggest integer using IF statement.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

int main() {

    unsigned int FIRST;
    unsigned int SECOND;
    unsigned int THIRD;

    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;
    cout << "Enter The FIRST Number : ";
    cin >> FIRST;
    cout << "Enter The SECOND Number : ";
    cin >> SECOND;
    cout << "Enter The THIRD Number : ";
    cin >> THIRD;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    if (FIRST > SECOND ) {

        if (FIRST > THIRD) {
            cout << FIRST << " is the LARGEST Number." << endl;
        }
        else {
            cout <<  THIRD << " is the LARGEST Number." << endl;
        }
    }
    else {
        cout << SECOND << " is the LARGEST Numver." << endl;
    }

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    
    return 0; 

}