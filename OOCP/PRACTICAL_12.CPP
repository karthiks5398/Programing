// DEFINITION :-12. Sum and average. Program to enter two integers and find their sum and average.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

int main() {
    
    int NUMBER_1 , NUMBER_2;
    float SUM , AVERAGE;
    
    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

    cout << "Enter The First Value : ";
    cin >> NUMBER_1;
    cout << "Enter The Second VAluw : ";
    cin >> NUMBER_2;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    SUM = NUMBER_1 + NUMBER_2;

    AVERAGE = SUM / 2;

    cout << "The SUM is : " << SUM << endl;
    cout << "The AVERAGE is : " << AVERAGE << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;

}