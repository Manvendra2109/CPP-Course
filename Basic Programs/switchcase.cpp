#include <iostream>
using namespace std;
int main()
{
    int e,f;
    cout << "Enter the case number";
    cin >> e;
    switch (e)
    {
        case (1):
        cout << "Hello world"<< endl;
        break;
        case (2):
        cout <<"HOLA"<< endl;
        break;
        case (3):
        cout << "Namaste"<< endl;
        break;
        case (4):
        cout << "Shinigami namaste" << endl;
        break;
        default:
        cout << "Namaskaram" << endl;
        break;
    }
     cout << "Enter the other case";
    cin >> f;
    switch (f)
    {
        case (9):
        cout << "you know me"<< endl;
        break;
        case (8):
        cout << " i know you"<< endl;
        break;
        case(7):
        cout << "thats it"<< endl;
        break;
        default:
        cout << "everything over "<< endl;
        break;
        return 0;

    }
}