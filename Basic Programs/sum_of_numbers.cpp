#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout << "Enter the number:";
    cin >> n;
    for (i=0; i<=n; i++)
    {
        sum = sum+i;
    }
    cout << "the sum of the number is:" << sum << endl;
    return 0;
}