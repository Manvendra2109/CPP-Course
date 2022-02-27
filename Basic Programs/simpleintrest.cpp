#include <iostream>
using namespace std;
int main()
{
    float P,R,T,SI;
    cout << "Enter the values:";
    cin >> P >> R >> T;
    SI=(P*R*T)/100;
    cout << "SI value is:" << SI << endl;

    return 0;
}