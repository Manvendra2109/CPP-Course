#include <iostream>
using namespace std;
int main ()
{
  int n,sum;
  sum = 0;
  cout << "Enter the positive integer:";
  cin >> n;
  for ( int i=1; i<=n; i++)
  sum = sum + i;
  cout << "Answer is " << sum << endl;
  return 0;
}