// DEFINITION :-19. Addition of two numbers using “public” data and public member function.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class Arithmetic {
    public:
        int Addition(int NUMBER_1, int NUMBER_2) {
            cout << "The Addition Of Two Number is : " << NUMBER_1 + NUMBER_2 << endl;
            return 0;
        }
};

int main() {
    Arithmetic Operation;
    int NUMBER_1 , NUMBER_2;

    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

    cout << "Enter The First Integer For Addition : ";
    cin >> NUMBER_1;
    cout << "Enter The Second Integer For Addition : ";
    cin >> NUMBER_2;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    Operation.Addition(NUMBER_1,NUMBER_2);

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;
}