#include <iostream>
using namespace std;
int main()
{
    int n,m,j,i,table;
    n = 24;
     m = 50;
     j = 29;
    for (i=1; i<=10; i++)
    {
        table = n*i;
        cout << "Table of 24 is : " << n << "*" << i << "=" << n*i << endl;
    }
    cout << "next table is:" << endl;
   
    for (i=1; i<=10; i++)
    {
        table = m*i;
        cout << "Table of 50 is : " << m << "*" << i << "=" << m*i << endl;
    }
    cout << "next table is:" << endl;
    
    for (i=1; i<=10; i++)
    {
       table = j*i;
       cout << "Table of 50 is : " << j << "*" << i << "=" << j*i << endl; 
    }
    return 0;
    
}
