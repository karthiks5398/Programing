// DEFINITION :-21. Print the values of number using “protected” data member.

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
using namespace std;

class Parent {
    protected:
        int VALUE;
    public:
        void AccessingVALUE(int NUMBER) {
            VALUE = NUMBER;
        }
};

class Child : public Parent {
    public:
        void Display() {
            cout << "You Have Entred The Value " << VALUE << endl;
        }
};

int main() {
    Child PermissionGrantTo;
    int USER_INPUT;
    
    cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

    cout << "Enter the Value : ";
    cin >> USER_INPUT;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    PermissionGrantTo.AccessingVALUE(USER_INPUT);
    PermissionGrantTo.Display();

    cout << endl << "Thanks For Using My Program !" << endl;
    
    return 0;
}