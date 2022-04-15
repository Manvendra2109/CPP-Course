// iss program mein ek galti pata chli ki {{{max}}} iss compiler mein ek keyword h jiska use nhi kr sakte isliye maxim yaa large aisa kuch use krna padega//
#include <iostream>
using namespace std;
template <class T>
T maxim(T x,T y)
{
    if (x>y)
    return x;
    else 
    return y;
}
int main ()
{
    int c=maxim(10,7);
    float d=maxim(5.5f,6.5f);
    cout << c<<endl;
    cout << d << endl;
    return 0;

}