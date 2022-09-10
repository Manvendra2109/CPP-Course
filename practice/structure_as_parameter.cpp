#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
 int area (struct rectangle r1)
{
    r1.length=20;
    r1.breadth=10;
    return r1.length*r1.breadth;
}
int main ()
{
    struct rectangle r={10,5};
    cout << "area is : " << area(r);
}