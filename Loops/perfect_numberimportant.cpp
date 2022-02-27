#include <iostream>
using namespace std;
int main()
{
    int i,j,sum=0;
    cout << "The perfect numbers between 1 & 5000 are:";
    for (i=1; i<=5000; i++)
    {
        for (j=1; j<=5000; j++)
        {
            if(j<i)
            {
                if(i%j==0)
                 sum=sum+j;
            }
            
            

        }    
        if(sum==i)
        {
            cout << i << endl;
        }
         j=1;
        sum =0;
    }
    

    return 0;
}

