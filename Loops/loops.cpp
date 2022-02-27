#include <iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout << "Enter the number:";
    cin >> n;
    for (i=0; i<=n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of natural numbers is:" << sum << endl;
    return 0;
}
