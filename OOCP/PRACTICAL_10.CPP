// DEFINITION :- 10. Perform the arithmetic operations using “INLINE” functions.
// ENROLLMENT NUMBER :- 190510101173
// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

inline int ADDTITON(float NUMBER_A, float NUMBER_B)
{
    return NUMBER_A + NUMBER_B;
}

inline float SUBTRACTION(float NUMBER_A, float NUMBER_B)
{
    return NUMBER_A - NUMBER_B;
}

inline int MULTIPlICATION(float NUMBER_A, float NUMBER_B)
{
    return NUMBER_A * NUMBER_B;
}

inline float DIVISION(float NUMBER_A, float NUMBER_B)
{
    return NUMBER_A / NUMBER_B;
}

inline float REMINDER(int NUMBER_A, int NUMBER_B)
{
    return (NUMBER_A % NUMBER_B);
}

int main()
{
    float NUMBER_1,NUMBER_2;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

    cout << "Enter The First Value : ";
    cin >> NUMBER_1;
    cout << "Enter The Second Value : ";
    cin >> NUMBER_2;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "Addition is : " << ADDTITON(NUMBER_1,NUMBER_2) << endl;
    cout << "Subtraction is : " << SUBTRACTION(NUMBER_1,NUMBER_2) << endl;
    cout << "MultipLication is :" << MULTIPlICATION(NUMBER_1,NUMBER_2) << endl;
    cout << "Division is :" << DIVISION(NUMBER_1,NUMBER_2) << endl;
    cout << "Reminder is :" << REMINDER(NUMBER_1,NUMBER_2) << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;
}