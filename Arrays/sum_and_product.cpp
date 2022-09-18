#include <iostream>
using namespace std;
int main ()
{
    int n,i,sum=0,product=1;
    cout << "size of ARRAY";
    cin >> n;
    int arr[n];
    cout << "elements in array :";
    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (i=0; i<n; i++)
    {
      sum = sum + arr[i];
      product = product * arr[i];  
    }
    
    cout << "sum is " << sum <<  endl;
    cout << "product is " << product << endl;
    return 0;
}