// DEFINITION :-20. Addition of two numbers using“private” member function.
// ENROLLMENT NUMBER :- 190510101173
// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class Arithmetic {
    private:
        int Addition(int NUMBER_1, int NUMBER_2) {
            cout << "The Addition Of Two Number is : " << NUMBER_1 + NUMBER_2 << endl;
            return 0;
        }
    public:
        int AccessingTheAdditionFuncation(int NUMBER_1,int NUMBER_2) {
            int Access = Addition(NUMBER_1,NUMBER_2);
            return 0;
        }
};

int main() {
    Arithmetic Operation;
    int NUMBER_1 , NUMBER_2;

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

    cout << "Enter The First Integer For Addition : ";
    cin >> NUMBER_1;
    cout << "Enter The Second Integer For Addition : ";
    cin >> NUMBER_2;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    Operation.AccessingTheAdditionFuncation(NUMBER_1,NUMBER_2);

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;
}