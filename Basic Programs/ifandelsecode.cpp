#include <iostream>
using namespace std;
int main ()
{
    int length,breadth;
    cout << "length is :" << endl;
    cin >> length;
    cout << "breadth is :" << endl;
    cin >> breadth;
    if (length==breadth)
    cout << "it is a square " << endl;
    else
    cout << " it is rectangle" << endl;
    return 0;
}
