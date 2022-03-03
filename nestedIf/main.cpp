#include <iostream>

using namespace std;

int main()
{
    int score{0};
    char letterGrade{0};
    cout << "Please enter your score between 0 and 100: ";
    cin >> score;
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            letterGrade = 'A';
        }
        else if (score >= 80)
        {
            letterGrade = 'B';
        }
        else if (score >= 70)
        {
            letterGrade = 'C';
        }
        else if (score >= 60)
        {
            letterGrade = 'D';
        }
        else if (score >= 50)
        {
            letterGrade = 'F';
        }
        else
        {
            letterGrade = 'U';
        }
        
        cout << "\nYour grade is: " << letterGrade;
        if (letterGrade == 'F' || letterGrade == 'U')
        {
            cout << "\nSorry you have failed." << endl;
        }
        else{
            cout << "\nYou have passed." << endl;
        }
    }
    else
    {
        cout << "\nPlease enter a valid score (between 0 & 100)";
    }
    

    return 0;
}