#include  <iostream>
using namespace std;
int main()
{
    int A[4][4]={{1,2,3,4},{5,4,3,2},{6,7,8,9},{1,3,5,7}};
    int B[4][4]={{3,4,5,6},{7,6,5,4},{7,6,5,4},{6,5,4,3}};
    int C[4][4];
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++ )
        {
            C[i][j]=A[i][j]*B[i][j];
        }
    }
    for (int i=0; i<4; i++)
    {
        for( int j=0; j<4; j++)
        {
            cout << C[i] [j] << " ";
        }cout << endl;
    }
    return 0;
}