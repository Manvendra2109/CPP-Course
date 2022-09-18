#include <iostream>
using namespace std;
int sum ( int n)
{
    int add=1;
   for ( int i=1; i<=n; i++)
{
    add = add * i;
} 
return add;
}

int main ()
{ 
    int x=5;
    cout << sum(x);

}

