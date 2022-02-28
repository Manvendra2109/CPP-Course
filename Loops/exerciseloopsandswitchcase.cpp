#include <iostream>
using namespace std;
int main()
{
    int n,j,rev=0;
    cout << "Enter the numbers";
    cin >> n;
    while (n!=0)
    {
        j=n%10;
        n=n/10;
        rev = (rev*10)+j;
        switch (j)
        {
        case 1:
            cout << "one" << endl; 
            break;
        case 2:
        cout << "two" << endl;
        break;
        case 3:
        cout << "three" << endl;
        break; 
        case 4:
        cout << "four" << endl;
        break; 
        case 5:
        cout << "five" << endl;
        break;
        case 6:
        cout << "six" << endl;
        break;
        case 7:
        cout << "seven" << endl;
        break;
        case 8:
        cout << "eight "  << endl;
        break;
        case 9:
        cout << "nine" << endl;
        break;
        case 10:
        cout << "ten" << endl;
        break;     
        default:
        break;
        }
    }cout  << endl;
    return 0;
}