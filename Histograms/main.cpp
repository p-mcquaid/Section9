#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int numItems{};
    cout << "Please enter the number of items you have. ";
    cin >> numItems;

    vector<int> data{};

    for (int i = 1; i <= numItems; i++)
    {
        int dataItems{};
        cout << "Enter data item " << i << ": ";
        cin >> dataItems;
        data.push_back(dataItems);
    }
    cout << "\nDisplaying Histogram" << endl;
    for (auto val : data)
    {

        for (int i{1}; i <= val; i++)
        {
            if (i % 5 == 0)
            {
                cout << "*";
            }
            else
                cout << "-";
        }
        cout << endl;
    }

    return 0;
}