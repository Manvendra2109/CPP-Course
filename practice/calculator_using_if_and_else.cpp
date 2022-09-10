#include<iostream>
using namespace std;
int main ()
{
    char oper;
    int a,b,c;
    cout << "Enter the operator +,-,/,*,% ";
    cin >> oper;
    cout << "enter the numbers ";
    cin >> a >> b;
    if(oper == '+')
    {
        c=a+b;
        cout << c;
    }
    else if (oper == '-')
    {
        c=a-b ;
        if (c < 0)
        {
            cout << "apna kaam kr naa";
        }
        else 
        cout << c;
    }
    else if (oper == '*')
    {
        c=a*b;
        cout << c;
    }
    else if (oper == '/')
    {
        c=a/b;
        cout << c;
    }
    else if (oper == '%')
    {
        c=a%b;
        cout << c;
    }
    else 
    cout << "there is a error in the opertor";
    return 0;
}