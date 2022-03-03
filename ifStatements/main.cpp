#include <iostream>

using namespace std;
//Using if statements

int main(){

    int num{0};
    const int min{10}, max{100};
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min)
    {
        cout << "\n=========== if statement 1";
        cout << "\nNumber is greater than or equal to" << min << endl;
        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    if (num <= max)
    {
        cout << "\n=========== if statement 2";
        cout << "\nNumber is less than or equal to " << max << endl;
        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    if (num >= min && num <= max)
    {
        cout << "\n=========== if statement 3" << endl;
        cout << num << " is within the range." << endl;
        cout << "This means statments 1 and 2 must fire as well" << endl;
    }
    if (num == min || num == max)
    {
        cout << "\n=========== if statement 4" << endl;
        cout << num << " is right on the boundary" << endl;
        cout << "All 4 statments should fire for this to" << endl;
    }
    
    
    cout << endl;
    return 0;
}