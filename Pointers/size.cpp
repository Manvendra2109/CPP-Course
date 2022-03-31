//  this code is knowing the size of array given by the user to find..................... In this size is found by the operator {{sizeof}}//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter numbers" << endl;
    cin >> n;
    int A[n];
    cout << sizeof A << endl;
return 0;
}