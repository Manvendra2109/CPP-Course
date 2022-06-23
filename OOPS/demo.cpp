#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter ()
    {
        return 2*(length+breadth);
    }

};
int main ()
{
    rectangle r1;
    r1.length=10;
    r1.breadth=5;
    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;
    rectangle r2;
    r2.length=20;
    r2.breadth=10;
    cout << "Area is " << r2.area() << endl;
    cout << "Area is " << r2.perimeter() << endl;
    return 0; 

}



