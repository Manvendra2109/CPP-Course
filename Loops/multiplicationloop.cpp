#include <iostream>
using namespace std;
int main ()
{
    int n,i=1,multiply;
    cout << "Enter the number:";
    cin >> n;
    for ( i=1; i<=10; i++)
    {
        multiply = n*i;
        cout << "Table is " << n << "*" << i << "=" << n*i << endl; 
    }
    return 0;
}