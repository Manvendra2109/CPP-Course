// In the paas by address  we are making pointer in the function as a formal parameter then we are making the actual parameter as a 
// address variable by ( & ) operator
#include <iostream>
using namespace std;
// formal parameter
void swap (int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    // actual parameter
    int a,b;
    a=10;
    b=20;
    swap (&a,&b);
    cout << "the reverse value are :" << a  << " "  << b;

}