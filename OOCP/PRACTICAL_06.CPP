// DEFINITION :-6. Swapping of two number using “call by Reference”.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class Swaping {

    public:

        void operation(int NUMBER_1 , int NUMBER_2) {

            cout << "Your Numbers Before The Swaping : " << NUMBER_1 << " , " << NUMBER_2 << endl;

            NUMBER_1 = NUMBER_1 ^ NUMBER_2; 
            NUMBER_2 = NUMBER_1 ^ NUMBER_2;
            NUMBER_1 = NUMBER_1 ^ NUMBER_2;

            cout << "Your Numbers After The Swaping : " << NUMBER_1 << " , " << NUMBER_2 << endl;
        }
};

int main() {

    Swaping obj;
    int NUMBER_1, NUMBER_2;

    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

    cout << "Enter The Number 1 : ";
    cin >> NUMBER_1;
    cout << "Enter The Number 2 : ";
    cin >> NUMBER_2;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    obj.operation(NUMBER_1,NUMBER_2);

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;

    return 0;    
}
