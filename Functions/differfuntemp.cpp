// in this iprogram  i learn a new thing about ternary operator {?:} this is the easiest form of having if and else in the function//
#include <iostream>
using namespace std;
template <class T>
T maxim (T x,T y)
{
    return x>y?x:y;
}
int main ()
{
    int c=maxim(10,2);
    float d=maxim(2.29992f,2.5f);
    cout << c << endl;
    cout << d << endl;
    return 0;
}