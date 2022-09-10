#include <iostream>
using namespace std;
// isme agar (void) ki jagah int laga dete to function mein phir (return zero) likhna padta ki iska output return value zero dega
// in this we using (&) operator becz the values are not passed but we are giving it new name in the same memory location it means (&x) behaves as (a)
// and (&y) behaves as b 
// AS in PASS by REFRENCE it doesn't take any extra memory block it's just make the ALIAS of the given variable
void swap (int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    
}
int main ()
{
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    cout << "the reverse value " << a << " " << b;
    
}