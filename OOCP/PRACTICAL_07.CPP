// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :- 7. Find the maximum number using “Return by reference”.

#include<iostream>
using namespace std;

int& max(int &NUMBER_A, int &NUMBER_B){
  
    if (NUMBER_A > NUMBER_B) {
        return NUMBER_A;
    }
    else {
        return NUMBER_B;
    }
}

int main()
{
    int NUMBER_A = 15 , NUMBER_B = 11; 
    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;
    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;
    cout << "max value is : " << max(NUMBER_A , NUMBER_B) << endl;
    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    return 0;
}
