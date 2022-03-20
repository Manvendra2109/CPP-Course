// this code i to be changed and it needs to be improvised//
#include <iostream>
using namespace std;
int main()
{
   int  A[8]={3,6,2,12,14,15,17,10},max=0,max2=0,i;
   for (i=0;i<8;i++)
   {
       if(A[i]>max)
       {
           max=A[i];
       }
       else if (max2<max)
       {
         max2!=max;
         max2=A[i];
       } cout << endl;
   }cout << "maximum number is:" << max2 << endl;
   return 0;
}