#include <iostream>
using namespace std;
int main()
{
    float n,i,Average,sum=0;
    cout << "Enter the 10 numbers:";
    for (i=1; i<=10; i++)
    {
        cin >> n;
        sum = sum+n;
    }
    Average = sum/10;
    cout << "Average is: " << Average << endl;
    return 0;
}