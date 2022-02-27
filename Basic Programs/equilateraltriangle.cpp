#include <iostream>
using namespace std;
int main()
{
    int S1,S2,S3;
    cout << "Enter the values of sides:";
    cin >> S1 >> S2 >> S3;
    if (S1 == S2 && S2 == S3  && S3 == S1)
    cout << "It is a equilateral triangle:" << endl;
    else if ( S1 != S2 && S2 != S3 && S3 != S1 )
    cout << "It is a scalen triangle:" << endl;
    else 
    cout << " It is a isosceles triangle:" << endl;
    return 0;
    
}