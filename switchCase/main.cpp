#include <iostream>

using namespace std;
//Using switch case statements
int main()
{

    /* Ask a user what grade they expect on an exam and
    tell them what they need to score to get it */

    char letterGrade{};

    cout << "Please enter which grade you wish to achieve: ";
    cin >> letterGrade;

    switch (letterGrade)
    {
    case 'a':
    case 'A':
        cout << "You need a 90 or above." << endl;
        break;
    case 'b':
    case 'B':
        cout << "You need to score between 80-89." << endl;
        break;
    case 'c':
    case 'C':
        cout << "You need to score between 70-79." << endl;
        break;
    case 'd':
    case 'D':
        cout << "You need to score between 60-69." << endl;
        break;
    case 'f':
    case 'F':
    {
        char confirm{};
        cout << "Are yo sure(Y/N)?: ";
        cin >> confirm;
        if (confirm == 'y' || confirm == 'Y')
        {
            cout << "Slacker" << endl;
        }
        else if (confirm == 'n' || confirm == 'N')
        {
            cout << "Good, excellent.." << endl;
        }
        else
        {
            cout << "Not a valid answer" << endl;
        }
        break;
    }
    default:
        cout << "Sorry, the grade you entered is invalid." << endl;
        break;
    }

    cout << endl;
    return 0;
}