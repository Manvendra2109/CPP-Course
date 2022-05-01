// isme simple sa logic h ki [i] ki value ko 0 se 1 krdo bs // 
#include <iostream>
using namespace std;
int main()
{
	int i,sum=0,n=8;
	int arr[]={1,2,3,4,5,6,7,8};
    for (i=1; i<n; i=i+2)
    {
        
        
        sum+=arr[i];
       
    }
    cout << sum << endl;

    return 0;
}   