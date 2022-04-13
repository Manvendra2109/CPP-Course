#include <iostream>
using namespace std;
int maxim (int a, int b, int c=0)
{
    return a>b && a>c ? a:(b>c?b:c);
}
int main ()
{
    cout << maxim(10,12) << endl;;
    cout << maxim(1.2f,2.1f,1.22f) << endl;
    cout << maxim(10,10,5) << endl;

    return 0;
}