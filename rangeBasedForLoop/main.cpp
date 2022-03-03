#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    /* int scores[]{10,20,30};

    for (auto score:scores)
    {
        cout << score << endl;
    } */
    
    /* vector<double> temps{23.5,47.2,30.1,5.6};
    double avgTemp{};
    double total{};

    for (auto temp : temps)
    {
       total += temp; 
    }

    if (temps.size() != 0)
    {
        avgTemp = total/temps.size();
    }
    cout << fixed << setprecision(1);
    cout << "The average temp is " << avgTemp; */


    /* for (auto val :{1,2,3,4,5})
        cout << val << endl; */
    
    for (auto c : "This is a test")
    {   
        if (c == ' ')
           cout << "\t";
        else
            cout << c;
        
    }
    
    return 0;
}