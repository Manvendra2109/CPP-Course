#include <iostream>
using namespace std;
int main ()
{
    int n,i,arr[n],min,max;
    cout << "enter the size of the array";
    cin >> n;
    cout << "enter the elements of the array";
    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    max=arr[0];
    min=arr[0];
    // In this we used a single loop in which we given two condition as for minimum and maximum element to find in array by using if and else  
    for (i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else if (min>arr[i])
        {
            min=arr[i];
        }
    }
    cout << "smallest is " << min << endl;
    cout << "largest is " << max << endl;
    return 0;
}