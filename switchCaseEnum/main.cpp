#include <iostream>

using namespace std;
//Using switch case statements
int main()
{
    enum Direction{
        left, right, up, down
    };
    Direction heading{right};

    switch (heading)
    {
    case left:
        cout << "going left" << endl;
        break;
    case right:
        cout << "going right" << endl;
        break;
    default:
        cout << "Ok.(Handles every other enum type)";
        break;
    }

    cout << endl;
    return 0;
}