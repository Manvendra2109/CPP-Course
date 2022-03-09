#include<iostream>
using namespace std;
int main()
{
    int A[7]={3,5,7,9,15,14,1},max=0,i;
    
    for (i=0;i<7;i++)
    {
        if(A[i]>max)
         max=A[i];
        
        
    }cout << "maximum number is:" << max << endl;
    return 0;
      
}    