// it is tried by me but in this i am not able to create a perfect downward triangle //
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=0; i <= 5; i++)
    {
        for (j=0; j<=5; j++)
        {
            if(i<=j)
                cout << "*";
            else
                cout << " ";
        }
        for(int k = 5 - i; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

return 0;
}