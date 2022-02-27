#include <iostream>
using namespace std;
int main()
{
    int Age1,Age2,Age3;
    cout << "Umar to daalo teeno ki:";
    cin >> Age1 >> Age2 >> Age3;
    if (Age1 < Age2 && Age1 < Age3)
    cout << " Age1 youngest h:" << endl;
    else if (Age2 > Age1 && Age2 > Age3)
    cout << " Age2 iska pata nhi:" << endl;
    else (Age3 > Age2 && Age3 > Age1);
    cout << " Age3 oldest:" << endl;
    return 0;

}