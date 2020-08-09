// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :-13. Prime or composite. Program to enter an integer and print if it is prime or composite.

#include <iostream>
using namespace std;

int main() {

   unsigned int NUMBER;
   int Iteraion;
   bool isPrime = true;

   cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

   cout << "Enter a Positive Integer: ";
   cin >> NUMBER;

   for (Iteraion = 2 ; Iteraion <= NUMBER / 2 ; ++Iteraion) {
      if (NUMBER % Iteraion == 0) {
         isPrime = false;
         break;
      }
   }

   cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

   if (isPrime) 
      cout << NUMBER << " is a Prime Number." << endl;
   else
      cout << NUMBER << " is a Composite." << endl;

   cout << endl << "******* Thanks For Using My Program ! *******" << endl;
   
   return 0;
}