#include <iostream>
using namespace std;
int main()
{
    double Hypotenuse,Length,Breadth;
    cout << "Teeno side daalo:";
    cin >> Hypotenuse >> Length >> Breadth;
    if ( Hypotenuse*Hypotenuse > Length*Length + Breadth*Breadth)
    cout << "Ye right triangle h:" << endl;
    else 
    cout << "ye  right triangle nhi h:" << endl;
    return 0;

}