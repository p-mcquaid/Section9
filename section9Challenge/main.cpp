#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
// You were trying to prevent duplication of numbers in the vector
int main()
{
    char userEntry{};
    vector<int> nums{1, 2, 3};
    int numberToEnter{0}, getSmall{}, getLarge{};
    double avg{0};

    do
    {
        cout << "-----------------" << endl;
        cout << "\nP: Print numbers " << endl;
        cout << "A: Add number " << endl;
        cout << "M: Display mean " << endl;
        cout << "S: Print smallest number " << endl;
        cout << "L: Print largest number " << endl;
        cout << "Q: Quit " << endl;
        cout << "C: Clear List " << endl;

        cout << "\nPlease enter your selection: ";
        cin >> userEntry;

        if (userEntry == 'P' || userEntry == 'p')
        {
            cout << "Displaying numbers..." << endl;
            if (nums.empty())
            {
                cout << "[] - The vector is empty" << endl;
            }
            else
            {
                cout << "[ ";
                for (auto i : nums)
                {
                    cout << i << " ";
                }
                cout << "]" << endl;
            }
        }

        else if (userEntry == 'A' || userEntry == 'a')
        {

            cout << "Please enter a number to enter to the list: ";
            cin >> numberToEnter;

            nums.push_back(numberToEnter);
            cout << numberToEnter << " has been added. " << endl;
        }

        else if (userEntry == 'M' || userEntry == 'm')
        {
            if (nums.empty())
            {
                cout << "There is no numbers in the list - The average is 0. " << endl;
            }
            else
            {
                for (auto num : nums)
                {
                    avg += num;
                }
                cout << "The mean in the list is: " << avg / nums.size() << setprecision(2) << endl;
                avg = 0;
            }
        }

        else if (userEntry == 'S' || userEntry == 's')
        {
            if (nums.empty())
                cout << "Smallest number not available - List is empty. " << endl;
            else
            {
                getSmall = nums[0];
                for (auto i : nums)
                {
                    if (i < getSmall)
                    {
                        getSmall = i;
                    }
                }
                cout << "The smallest number in the set is " << getSmall << endl;
            }
        }

        else if (userEntry == 'L' || userEntry == 'l')
        {
            if (nums.empty())
                cout << "Largest number not available - List is empty. " << endl;
            else
            {
                getLarge = nums[0];
                for (auto i : nums)
                {
                    if (i > getLarge)
                    {
                        getLarge = i;
                    }
                }
                cout << "The largest number in the set is " << getLarge << endl;
            }
        }

        else if (userEntry == 'Q' || userEntry == 'q')
        {
            cout << "Program terminated - Goodbye!. ";
        }

        else if (userEntry == 'C' || userEntry == 'c')
        {
            nums.clear();
            cout << "The list of numbers has been cleared. " << endl;
        }

        else{
            cout << "Unknown selection. Please select an option from the list. " << endl;
        }
    } while (userEntry != 'Q' && userEntry != 'q');

    return 0;
}