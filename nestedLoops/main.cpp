#include <iostream>

using namespace std;

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            cout << j << " * " << i << 
            " = " << j*i << endl;
        }
        cout << "-------------" << endl;
    }
    
    return 0;
}