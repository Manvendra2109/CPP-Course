// it is tried by me but in this i am not able to create a perfect downward triangle //
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=0; i<7; i++)
    {
        for (j=0; j<7; j++)
        {
            if(i<=j)
            {
                cout << "*";
            }
            else if (j=2*i-1)
            cout << " ";
        }cout << endl;
    }cout << endl;

return 0;
}