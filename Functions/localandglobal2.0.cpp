// jo void fun () ke upar h wo global variables h uske baad agar jo void fun ()[g] use hua h wo local variable h //
#include <iostream>
using namespace std;
int g=10;
void fun ()
{
    int g=5;
    {
        g++;
    }
}
int main ()
{
    cout << g << endl;
    fun ();
    cout << g << endl;
}