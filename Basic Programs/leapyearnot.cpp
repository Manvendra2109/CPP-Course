#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year:";
    cin >> year;
    if (year%4==0 )
    cout << "Leap year:"<< endl;
    else if (year%4000==0)
    cout << " Leap year:";
    else
    cout << "This is not a leap year:" << endl;
    return 0;
}