// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :-23. Sum, difference, product and quotient of two integers. C++ Program to find the sum, difference, product and quotient of two integers using INLINE function. 

#include<iostream>
using namespace std;

inline float SUM(float FIRST, float SECOND) {
    return FIRST + SECOND;
}

inline float DIFFRANCE(float FIRST, float SECOND) {
    return FIRST - SECOND;
}

inline float PRODUCT(float FIRST, float SECOND) {
    return FIRST * SECOND;
}

inline float QUOTIENT(float FIRST, float SECOND) {
    return FIRST / SECOND;
}


int main()
{
    float FIRST , SECOND ;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

    cout << "Enter The First Number : ";
    cin >> FIRST ;
    cout << "Enter The Second Number : ";
    cin >> SECOND;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "Sum is : " << SUM(FIRST,SECOND) << endl;
    cout << "Diffrence is : " << DIFFRANCE(FIRST,SECOND) << endl;
    cout << "Peoduct is : " << PRODUCT(FIRST,SECOND) << endl;
    cout << "Quotient is : " << QUOTIENT(FIRST,SECOND) << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;
}