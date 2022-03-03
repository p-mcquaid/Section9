#include <iostream>

using namespace std;
/*Shipping Cost calculator

    ask user for package dimensions in inches
    length, width, height in integers

    all dimensions must be 10 inches or less or it cannot be shipped

    base cost £2.50
    if package volume greater than 100 cubic inches, there is a 10% surcharge
    if package volume greater than 500 cubic inches, there is a 25% surcharge
*/
int main(){

    int length{0}, height{0}, width{0};
    const int dimensionLimit{10};
    cout << "Please enter your package's length, width and height in inches" << endl;
    cin >> length >> width >> height;

if (length <= dimensionLimit || width <= dimensionLimit || height <= dimensionLimit)
{
    const double baseCost{2.50};
    double packageVolume{static_cast<double>(length)*static_cast<double>(width)*static_cast<double>(height)};
    cout << "==========" << endl;
    cout << packageVolume << endl;
    if (packageVolume > 500)
    {
        double costToShip{(baseCost + (baseCost/100*25))};
        cout << "The cost to ship you package is " << costToShip << endl;
    }
    else if (packageVolume > 100)
    {
        double costToShip{(baseCost + (baseCost/100*10))};
        cout << "The cost to ship you package is " << costToShip << endl;
    }
    else
    {
        double costToShip{baseCost};
        cout << "The cost to ship you package is " << costToShip << endl;
    }
    
   
}
else{
    cout << "\nSorry, your package is too large to be shipped with us." << endl;
}


    return 0;
}