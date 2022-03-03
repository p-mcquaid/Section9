#include <iostream>

using namespace std;

int main(){
/* 
    int num{};
    cout << "Please enter a positive integer: ";
    cin >> num;
     while (num > 0)
     {
         cout << num << endl;
         num--;

     }
    cout << "Blastoff!" << endl; */
     
    /* int num{};
    cout << "Enter a positive integer to count up to. ";
    cin >> num;

    int i{1};
    while (num >=i)
    {
        cout << i << endl;
        i++;

    }
     */

    /* int number {};
    cout << "Enter an integer less than 100. ";
    cin >> number;

    while (number >= 100)
    {
        cout << "Enter an integer LESS than 100. ";
        cin >> number;
    }
    cout << "\nThanks!"; */
    
    int number{};
    bool isDone{false};

    while (!isDone)
    {

        cout << "Enter a number between 1 and 5. ";
        cin >> number;
        if (number < 1 || number > 5)
        {
            cout << "Number entered is out of range. ";
        }
        else{
            cout << "Thanks!" << endl;
            isDone = true;  
        }
        
    }

    return 0;
} 