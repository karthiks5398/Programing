// DEFINITION :-15. String length Program to enter a string and find its length. 

// THIS CODE IS WRITTEN IN VS CODE 


#include<iostream>
#include<cstring>
using namespace std;

int main()
{

// NOTE :- YOU CAN RUM ANY ONE LOGIC AT A TIME , SO CHOOSE ANY ONE LOGIC AND COMMENT THE RAST OF THE CODE 

cout << endl <<"******* WALCOME!! To The Program ********"<< endl << endl;

//================================================================================
    
    // using built-in funcation size()
    
    string mystr = "Kishan";
    cout << endl <<"******* your Output is Here :D ********"<< endl << endl;   
    cout << "length of this string using size oprator : " << mystr.size() << endl;
    cout << endl << "******* Thanks For Using My Program ! *******" << endl;
 
//================================================================================ 
 
    // using built-in funcation strlen()

    /* char mystr[] = "Kishan";
    cout << endl <<"******* your Output is Here :D ********"<< endl << endl;
    cout << "length of this string using strlen : " << strlen(mystr) << endl;
    cout << endl << "******* Thanks For Using My Program ! *******" << endl;  */

//================================================================================

    // the while loop logic to find the length

  /*   char*  ch = mystr;
    int count = 0;

    while (*ch != '\0')
    {
        count++;
        ch++;
        // break;
    }
    
    cout << endl <<"******* your Output is Here :D ********"<< endl << endl;

    cout << "length of this string using while loop :" << count << endl;
    cout << endl << "******* Thanks For Using My Program ! *******" << endl; */

//================================================================================

    // the for loop logic to find the length 

   /*  count = 0;
    for(int i = 0 ;mystr[i] != '\0' ; i++ )
    {
        count++;
    }

    cout << endl <<"******* your Output is Here :D ********"<< endl << endl;

    cout << "length of the string using for loop :" << count ;

    cout << endl << "******* Thanks For Using My Program ! *******" << endl; */
 
//================================================================================
    return 0;
}