#include <iostream>
using namespace std;
int main()
{
    int A[10],n=10,i,key;
    cout << "enter the numbers:" << endl;
    for (i=0; i<n; i++)
    {
        cin >> A[i];
    } 
    cout << "enter key:" << endl;
    cin >> key;
    for (i=0; i<n; i++)
    {
        if(key==A[i])
        {
            cout << "found :" << i << endl;
            return 0;
        }
    }cout << "not found" << endl;
    return 0;
}