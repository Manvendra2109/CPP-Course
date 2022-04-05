#include <iostream>
using namespace std;
int main()
{
    
    int i=1,fact=1,n;
    int *p=&fact;
   
    cout << "enter the value " << endl;
    cin >> n;
    for (i=1; i<=n; i++)
    {
      *p=*p*i;
    }
    cout << *p << endl;
    return 0;


}