// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :- 2. Create a class programming with two methods. Input_value for getting value of data and output_value for printing data using class and objects.

#include<iostream>
using namespace std;

class programming {

    int value;

    public:

        int Input_Value() {
            cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;
            cout << "Enter The Value : ";
            cin >> value;
            return 0;
        }

        int Output_Value() {
            cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;
            cout << "Your Value is : " << value << endl;
            return 0;
        }
};

int main() {
    programming obj;
    obj.Input_Value();
    obj.Output_Value();
    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    return 0;
}
