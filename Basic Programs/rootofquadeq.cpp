#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c;
    cout << "Enter the values:";
    cin >> a >> b >> c;
    if (b*b-4*a*c >= 0)
    cout << "it is a root:";
    else (b*b-4*a*c < 0);
    cout << "it is not a root";
    return 0;
    {
        float a,b,c,x;
    cout << "Checking the root:";
    cin >> a >>b >>c >> x;
    x = (-b + sqrt(b*b-4*a*c))/2*a && (-b -sqrt (b*b-4*a*c))/2*a;
    cout << "the roots are" << x << endl;
    return 0;


    }
    
} 



    
