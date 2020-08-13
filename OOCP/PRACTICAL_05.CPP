// DEFINITION :-5. Swapping of two number using “call by values”.
// ENROLLMENT NUMBER :- 190510101173
// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class Swaping {

    public:

        void operation(int NUMBER_1 , int NUMBER_2) {

            cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;
            cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

            cout << "Your Numbers Before The Swaping : " << NUMBER_1 << " , " << NUMBER_2 << endl;

            NUMBER_1 = NUMBER_1 ^ NUMBER_2; 
            NUMBER_2 = NUMBER_1 ^ NUMBER_2;
            NUMBER_1 = NUMBER_1 ^ NUMBER_2;

            cout << "Your Numbers After The Swaping : " << NUMBER_1 << " , " << NUMBER_2 << endl;
        }
};

int main() {

    Swaping obj;
    obj.operation(15,11);

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;    
}
