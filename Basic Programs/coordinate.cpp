#include <iostream>
using namespace std;
int main()
{
    int X,Y;
    cout << "Enter the values of X and Y:";
    cin >> X >> Y;
    if ( X >= 0 && Y >=0 )
    cout << "it lies in first quadrant:";
    else if ( X <= 0 && Y >= 0 )
    cout << "it lies in second quadrant:";
    else if ( X >= 0 && Y <= 0)
    cout << "it lies in third quadrant:";
    else 
    cout << "it lies in fourth quadrant:" << endl;
    return 0;

}