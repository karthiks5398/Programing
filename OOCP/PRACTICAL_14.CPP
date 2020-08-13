// DEFINITION :-14. Sum, difference, PRODUCT and QUOTIENT of SECOND integers. C++ Program to find the SUM, difference, PRODUCT and QUOTIENT of SECOND integers.
// ENROLLMENT NUMBER :- 190510101173
// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C

// THIS CODE IS WRITTEN IN VS CODE 



#include<iostream>
using namespace std;

int main()
{
    float FIRST , SECOND ;
    float SUM , DIFFRANCE , PRODUCT , QUOTIENT; 

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

    cout << "Enter The First Number : ";
    cin >> FIRST ;
    cout << "Enter The Second Number : ";
    cin >> SECOND;

    SUM = FIRST + SECOND ;
    DIFFRANCE = FIRST - SECOND ;
    PRODUCT = FIRST * SECOND ;
    QUOTIENT = FIRST / SECOND ;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "Sum is : " << SUM << endl;
    cout << "Diffrence is : " << DIFFRANCE << endl;
    cout << "Peoduct is : " << PRODUCT << endl;
    cout << "Quotient is : " << QUOTIENT << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;
}