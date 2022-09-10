#include<iostream>
using namespace std;
int main()
{
    int arr[50],n,i,temp;
    cout << "please enter the numbers you want to enter " << endl;
    cin >> n;
    // ye for loop numbers print karane ke liye h
    for(i=0;i<n;i++)
    {
        cout << "enter the element no : " << i+1 << " = ";
        cin >> arr[i];
    }
    // ye for loop temp variable ko operation perform krne ke liye h
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    // ye for loop reverse array ko print karane ke liye h
    cout<< "\n reverse all elements are" << endl;
    for(i=0;i<n;i++)
    {
        cout << arr[i] << ":";
    }

return 0;
}