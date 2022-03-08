#include <iostream>
using namespace std;
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,12,14},mid,key,l=0,h=9;
    cout << "enter key" << endl;
    cin >> key;
    while(l<=9)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout << "found at:" << mid << endl;
            return 0;
        }else if (key<A[mid])
        {
            h=mid-1;
        }else 
        {
            l=mid+1;
        }
    }cout << "not succesful" << endl;
    return 0;
}