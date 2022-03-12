#include <iostream>
using namespace std;
int main()
{
    int i,j,count=1;
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
        
    }return 0;
}