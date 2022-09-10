#include <iostream>
using namespace std;
int main ()
{
    int n,i,arr[i],sum=0,product=1;
    cout << "size of ARRAY";
    cin >> n;
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
    cout << "sum is " << sum;
    cout << "product is " << product;
    return 0;
}