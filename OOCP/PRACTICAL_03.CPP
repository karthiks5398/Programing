// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :- 3. Create a class “students”. Create two methods for input and output of students roll number, name, marks1, marks2, marks3, sum of marks and average of marks.

#include<iostream>
using namespace std;

class students {

    public:

        int ROLL_NUMBER , SUM  = 0;
        float AVERAGE;
        string NAME;
        int MARKS[3];

        void input() {

            cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;
            
            cout << "Enter the Roll Number : " ;
            cin >> ROLL_NUMBER;
            cout << "Enter the Name : ";
            cin >> NAME;

            for(int iteraton = 1 ; iteraton <= 3 ; iteraton++) {
                cout << "Enter the marks of subject " << iteraton << " : ";
                cin >> MARKS[iteraton];
            }

            cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;
        } 

        void output() {
            cout << "The ROLL_NUMBER is : " << ROLL_NUMBER << endl;
            cout << "The NAME is : " << NAME << endl;

            for(int iteration = 3 ; iteration > 0 ; iteration--) {
                SUM = SUM + MARKS[iteration];
            }
            
            cout << "The SUM of MARKS is : " << SUM << endl;

            AVERAGE = SUM/3;

            cout << "The AVERAGE of marks is : " << AVERAGE << endl;


        }
};

int main() {
    students obj;
    obj.input();
    obj.output();
    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    return 0;
}
