#include <iostream>
using namespace std;
int v=0;
void fun ()
{
    int a=5;
    v++;
    cout << a << " " << v;
    
}
main ()
{
    fun();
    fun();
    fun();
}