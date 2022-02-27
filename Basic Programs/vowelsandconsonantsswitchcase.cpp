#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter the case number:";
    cin >> m;
    switch (m)
    {
    case (1):
    cout << "a" << " is vowel " << endl;
        break;
        case (2):
        cout << "e" << " is vowel" << endl;
        break;
        case (3):
        cout << "i" << " is vowel" << endl;
        break;
        case (4):
        cout << "o" << " is vowel" << endl;
        break;
        case (5):
        cout << "u" << " is vowel" << endl;    
    default:
    cout << "other are consonants:";
        break;
        return 0;
    }

}