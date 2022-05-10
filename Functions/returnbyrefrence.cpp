#include <iostream>
using namespace std;
int & fun (int &b)
{
    cout << b;
    return b;
}
main ()
{
    int x=25;
    fun (x) =25;
}