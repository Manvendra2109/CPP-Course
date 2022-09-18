#include <iostream>
using namespace std;
int factors(int n)
{
    
    for (int i=1; i<n; i++)
    {
        if(n%i==0)
        {
        cout<<i;
        }
    }
    
}
int main()
    {
        int x=10;
        cout << factors(x);
         return 0;              
    } 
    
    
