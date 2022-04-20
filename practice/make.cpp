#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "enter the numbers: ";
    cin >> n;
    if (n>=20&&n<=30)
    {
        cout << "full maze hn ab to:";
    }
    else if (n>=13&&n<=20)
    {
        cout << "thik thak maze hn  abhi thoda aur grind krna h";
    }
    else 
    {
        cout << "mehnat to krni h";
    }
    return 0;
}