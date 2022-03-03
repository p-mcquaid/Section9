#include <iostream>

using namespace std;
//using if-else statements

int main(){
    int num{0};
    const int target{10};

    cout << "Enter a number and ill compare it to " << target << ": " << endl;
    cin >> num;

    if (num > target)
    {
        cout << num << " is greater than " << target << endl;
        int diff{num-target};
        cout << "The difference between " << num << " and " << target << " is " << diff << endl;    

    }
    else if (num == target)
    {
        cout << "The number is equal to " << target << endl;
    }
    else
    {
        cout << num << " is less than " << target << endl;
        int diff{target-num};
        cout << "The difference between " << num << " and " << target << " is " << diff << endl;    
    }
    
    return 0;
}