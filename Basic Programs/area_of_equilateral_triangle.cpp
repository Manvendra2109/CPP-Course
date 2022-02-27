#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float a,Area;
  cout << "Enter the value of side :";
  cin >> a;
  Area = sqrt(3)/4*a*a;
  cout << "The area is:" << Area << endl;
  return 0;
}