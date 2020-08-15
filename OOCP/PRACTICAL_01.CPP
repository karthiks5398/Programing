// DEFINITION :- 1. C++ program to create a simple class and object and print “HELLO”.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class kishan {

    public:

        int output() {
            string demo;
            cout << "HELLO" << endl;
            return 0;
        }
};

int main() {

    kishan obj;
    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;
    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;
    obj.output();
    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    return 0;
}
