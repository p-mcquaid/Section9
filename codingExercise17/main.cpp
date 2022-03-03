#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec{1, 2, 3};
    int result{0};
   /*  for (int i{0}; i < vec.size(); i++)
    {
        // cout << vec.at(i) << endl;
        for (int j{0}; j < vec.size(); j++)
            cout << vec.at(i) << " * " << vec.at(j) << " = " << vec.at(i) * vec.at(j) << endl;
    } */

    for (int i = 0; i < vec.size();i++)
    {
        for (int j = i+1; j < vec.size();j++)
        {
            cout << vec[i] << " * " << vec[j] << " = " << vec[i] * vec[j] << endl;
            result += vec[i]*vec[j];
        }
    }

    cout << result;
    return 0;
}