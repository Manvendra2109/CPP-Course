#include <iostream>
using namespace std;
int even (int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;

}
int main ()
{
    int n,r;
    cout << "Enter the number: " << endl;
    cin >> n;
    r = even(n);

    cout << r << endl;
    

}