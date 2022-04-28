// isi me agar address print krana h to uske liye bs coutt << p << likhna hog return p ke upar aur *q dena padega
#include <iostream>
using namespace std;
int * func()
{
    int*p=new int[6];
    for(int i=0; i<6; i++)
    {
        p[i]=5*i;
    }
    return p;
}
int main ()
{
    int*q=func();
    cout << q << endl;
    for(int i=0; i<6; i++)
    cout << q[i] << endl;

}