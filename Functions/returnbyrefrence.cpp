#include <iostream>
using namespace std;
int & fun (int &a)
{
    cout << a;
    return a;
}
main ()
{
    int x=25;
    fun (x) =25;
}