#include<iostream>
using namespace std;
int main()
{
    int i,j,A[4][5]={{2,3,4,5,6},{6,5,4,3,2},{9,8,7,6,5},{1,2,3,4,5}};
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            cout << A[i][j];
        }cout << endl;
    }cout << endl;

return 0;
}