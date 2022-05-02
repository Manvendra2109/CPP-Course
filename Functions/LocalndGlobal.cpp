// iss program mein jo h [a] ye ek local variable h and jo [g] h wo ek global variable h ..........
#include <iostream>
using namespace std;
int g=5;
void fun ()
{
    int a=10;
    a++;
    g++;
    cout << a << " " << g << endl;
}
int main ()
{
    cout << g << endl;
    fun ();
    cout << g << endl;
    return 0;
}