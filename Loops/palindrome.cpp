

//reversing of the number is equal to the given where [reverse=(reverse * 10)+r]
#include <iostream>
using namespace std;
int main()
{
    int n,j,rev=0,m;
    cout << "enter the number:";
    cin >> n;
    m=n;
    while (n>0)
    {
        j=n%10;
        n=n/10;
        rev=(rev*10)+j;
    }if(rev==m)
    cout << "it is a palindrome"  << endl;
    else
    cout << "it is not a palindrom " << endl;
    return 0;
}