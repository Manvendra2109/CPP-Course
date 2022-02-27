// In this we use a new variable to use it as a <<count>> to count the factors if the factors are count upto 2 then it is a prie number;
#include <iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout << " Enter the numbers:" << endl;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }if ( count == 2)
    cout << "it is a prime number" << endl;
    else
    cout << "it is not a prime number" << endl;


    return 0;
}