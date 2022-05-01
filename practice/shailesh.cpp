// ism e na bhot simple sa logic laga h bs isme {{{{i+2}}}} even index check krne ke liye hua h 

#include <iostream>
using namespace std;
int main()
{
	int i,sum=0,n=5;
	int arr[]={2,3,4,5,6};
    for (i=0; i<n; i=i+2)
    {
        
        
        sum+=arr[i];
       
    }
    cout << sum << endl;

    return 0;
}   