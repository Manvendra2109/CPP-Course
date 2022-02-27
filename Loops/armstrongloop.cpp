#include <iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cout << " Enter the number:" << endl;
    cin >> n;
    for (i=0; i<=n; i++)
    {
        if(n>0)
        j=n%10;
        n=n%10;
        sum = sum+j*j*j;

    }if(sum==j)
    cout << "it is a armstrong number:"  << endl;
    else
    cout << "it is not a armstrong number:" << endl;
    return 0;
}