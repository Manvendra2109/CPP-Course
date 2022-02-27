#include <iostream>
using namespace std;
int main()
{
    int n,i,factorial;
    factorial=1;
    cout << "entre a positive integer:";
    cin >> n;
    for(int i=1; i<=n; i++)
    factorial = factorial*i;
    
    cout << "factorial is:" << factorial << endl;
    return 0;
}