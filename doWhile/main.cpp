#include <iostream>

using namespace std;

int main()
{
    char menuSelection{};
    do
    {
        cout << "------------" << endl;
        cout << "1. Do This " << endl;
        cout << "2. Do that " << endl;
        cout << "3. Do something else " << endl;
        cout << "Q. Quit " << endl;
        cout << "Enter your selection: ";
        cin >> menuSelection;
        if (menuSelection == '1')
        {
            cout << "You chose 1 - doing this. " << endl;
        }
        else if (menuSelection == '2')
        {
            cout << "You chose 2 - doing that. " << endl;
        }
        else if (menuSelection == '3')
        {
            cout << "You chose 3 - doing something else. " << endl;
        }
        else if (menuSelection == 'q' || menuSelection == 'Q')
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "Unknown command - please try again. " << endl;
        }

    } while (menuSelection != 'Q' && menuSelection != 'q');

    cout << endl;
    return 0;
}