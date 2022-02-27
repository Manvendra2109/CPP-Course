#include <iostream>
using namespace std;
int main()
{
    int n,i,j,rev=0;
    cout << "Enter the numbers:" <<  endl;
    cin >> n;
    for (i=0; i<=n; i++ )
    {
        if(n>0)
        j=n%10;
        n=n/10;
        
        
        cout << j << endl;

    }
    return 0;
}