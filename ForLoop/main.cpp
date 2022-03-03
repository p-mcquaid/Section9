#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Basic for loop
    /*  for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    } */

    //For loop incrementing by 2
    /*  for (int i = 0; i < 10; i+=2)
    {
        cout << i << endl;
    } */

    //for loop with a decrement
  /*   for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    } */

    //For loop incrementing by 10 
    //and displaying i values divisable by 15
   /*  for (int i = 0; i <= 100; i+=10)
    {
        if (i%15 == 0)
        {
            cout << i << endl;  
        }  
    } */

    //Using a nested for loop to add two values together
    /* for (int i{1}, j{5}; i <= 5; i++, j++)
    {
        cout << i << " + " << j << " = " << (i+j) << endl;
    } */
    
    //For loop using a condtional statement
    /* for (int i {1}; i < 101; i++)
    {
        cout << i << ((i%10==0)? "\n" : " ");
        
    } */
    
    //For loop with a vector
    /* vector<int> nums {10,20,30,40,50};
    for (unsigned i {0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    } */
    
    
    return 0;
}