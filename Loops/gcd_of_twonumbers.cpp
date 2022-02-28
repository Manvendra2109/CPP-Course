#include <iostream>
using namespace std;
int main()
{
    int n,m,i;
    cout << "Enter the two numbers:";
    cin >> m >> n;
    
    for (i=0; i<=n; i++)
    {
        if(m>n)
        m=m-n;
        else if(n>m)
        n=n-m;
        

    }cout << "GCD is: " << m << endl;
    m!=n;
    return 0;
}