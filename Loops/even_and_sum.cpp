#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout << "Enter the numbers:" << endl;
    cin >> n;
    for (i=2; i<=2*n; i++)
    {
        if(i%2==0)
        cout << i << endl;
        sum+=i;
    }
    cout << "the sum is:" << sum << endl;
    return 0;
}