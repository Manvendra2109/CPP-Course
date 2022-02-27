#include <iostream>
using namespace std;
int main ()
{
    int n,i=0,print;
    cout << "Enter the number:";
    cin >> n;
    for ( i=0; i<=n; i++)
    {
      print = i;
      cout << "\n user given:" << print << endl;
    }
    return 0;
}