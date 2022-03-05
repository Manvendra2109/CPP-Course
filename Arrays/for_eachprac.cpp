#include <iostream>
using namespace std;
int main()
{
    int  A[5]={'S','J','M','G','H'};
    // In this code the use of (&) is used to tell the array elements to change according to the cout statement << ++x << to increase the +1 value of the elements //
    for (auto &x:A)
    cout << ++x << endl;
    return 0;
}