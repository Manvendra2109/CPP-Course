#include <iostream>
using namespace std;
int main()
{
    int n,i, S[5]= {3,4,6,8,10};
    // if we dont give the size of the array and intialized all the elements we need then it always detect the size of the array on its own//;
    // if we ecxeed the value than the size of the array we declared then it shows compile time error //;
    // in this if we give only 2 values in indices then the value of array of size of array didn't effect it only print 2 values and rest of the values will be zero by default //;
    // we use for loop here to go in te indices to get every value //;
    for (i=0; i<5; i++)
    {
        cout << S[i] << endl;
    }return 0;
}