#include<iostream>
using namespace std;
int main()
{
    int A[3][4]={{1,2,3,4},{4,3,2,1},{7,6,4,4}};
    int B[3][4]={{1,4,5,6},{7,6,5,4},{2,3,4,5}};
    int C[3][4];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for (int i=0; i<3; i++)
    {
        for ( int j=0; j<4; j++)
        {
            cout << C[i][j];
        }cout << endl;
    }cout << endl;

return 0;
}