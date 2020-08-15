// DEFINITION :- 4. Swapping of two number without using third variable. 

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class Swaping {

    public:

        int NUMBER_1, NUMBER_2;

        void operation() {

            cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

            cout << "Enter The Number 1 : ";
            cin >> NUMBER_1;
            cout << "Enter The Number 2 : ";
            cin >> NUMBER_2;

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
    obj.operation();
    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    return 0;    
}
