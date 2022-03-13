#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=0; i<9; i++)
    {
        for (j=0; j<10; j++)
        {
            if (i>=j)
            cout << "*";
        }cout << endl;
    }return 0;
}