#include <iostream>
using namespace std;
int product(int x,int y)
{
    int z;
    z=x*y;
    return x*y;
}
int main ()
{
   int x,y,z;
   cout << "enter the x and y" << endl;
   cin >> x;
   cin >> y;
   z=product(x,y);
   cout <<"Answer is: "<< z << endl;
   return 0;

}