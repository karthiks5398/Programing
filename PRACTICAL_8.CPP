// NAME :- KISHAN LAL
// SEM :- 3 BACH :- 2 DIV :- C
// ENROLLMENT NUMBER :- 190510101173

// THIS CODE IS WRITTEN IN VS CODE 

// Definition :- 8. Replace the first character of the string using “Return by reference”.

#include<iostream>
using namespace std;


int main()
{
    string str1 = "This is C language";
    string str2 = "This is C++ language"; 

    cout << endl <<"******* WALCOME!! To The Kishan's Program ********"<< endl << endl;

    cout << "Your First String is : " << str1 << endl;
    cout << "Your Second String is : " << str2 << endl;

    cout << endl <<"******* Your Output is Here :D ********"<< endl << endl;

    cout << "Before Replacing :- " << str1 << endl;
    str1.replace(8,1,str2);
    cout << "After Replacing the String :- " << str1 << endl;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
    
    return 0;
}