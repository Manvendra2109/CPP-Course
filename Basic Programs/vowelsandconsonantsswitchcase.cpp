#include <iostream>
using namespace std;
int main()
{
    char m,n;
    cout << "Enter the case number:";
    cin >> m;
    switch (m)
    {
        case (97):
        cout << "a" << " is vowel " << endl;
        break;
        case (102):
        cout << "e" << " is vowel" << endl;
        break;
        case (105):
        cout << "i" << " is vowel" << endl;
        break;
        case (111):
        cout << "o" << " is vowel" << endl;
        break;
        case (117):
        cout << "u" << " is vowel" << endl;    
        default:
            cout << "other are consonants:";
        break;
        return 0;
    }

}