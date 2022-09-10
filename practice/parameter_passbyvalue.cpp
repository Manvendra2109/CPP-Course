// this is pass by value in this the elements are not swapping beacause in pass by value changes done in formal parameters are not 
// reflected in actual parameters
#include <iostream>
using namespace std; 
// int x, int y these are formal parameters or prototype
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    // here a and b are actual parameters
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    cout << "reversed values are" << a << b;
    
}