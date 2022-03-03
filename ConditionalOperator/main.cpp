#include <iostream>

using namespace std;
//using Conditional Operators
int main(){

   /*  int num{};

    cout << "Please enter an integer: " << endl;
    cin >> num;

    /* if (num %2 == 0)
    {
        cout << num << " is an even number." << endl;
    }else{
        cout << num << " is an odd number." << endl;
    } */
    

    // A conditional operator works in a similar way to an if/else statement
    // the condition presented must result in a bool result i.e 5 > 2 == true
    // the two results provided are then selected based on the result of the bool
    // for example if true then the left result is selected and if false then the right is

   // cout << num << " is " << ((num %2 == 0) ? "even" : "odd") << endl;;
    //is the modulus of num 0 or is there a remainder?
    //if a number is even the answer will equal 0 therefore even is selected
    //if there is anything other than a 0, then the number must be odd and odd is selected
 
    int num1{}, num2{};

    cout << "Enter 2 integers seperated by a space: " << endl;
    cin >> num1 >> num2;

    if (num1 != num2)
    {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else
        cout << "The numbers are the same. " << endl;
    
    return 0;
}