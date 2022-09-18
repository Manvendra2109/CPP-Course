#include<iostream>
using namespace std;

int main()
{
    int r,rev=0,n,m;
    cin >> n;
    m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev == n)
    {
        cout << "palindrome"<< endl;
    }
    else 
    {
        cout << "not palindrome";
    }


return 0;
}