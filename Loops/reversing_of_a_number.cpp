//reversing of the number is equal to the given where [reverse=(reverse * 10)+r]


#include <iostream>
using namespace std;
int main()
{
    int n,j,rev=0;
    cout << "Enter the number:";
    cin >> n;
    while(n>0)
    {
      j=n%10;
     n=n/10;
     rev = (rev *10)+j;


    }
   cout << "the reverse number is:" << rev << endl;
   return 0;


}