#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
 int main()
 {
    Rectangle *p ,r;
    p = &r;

    cout << "enter length: ";
    // here is the higher precedence of dot(.) operator so the program will not take *p so we have to enclose it (*p) the the program runs properly
    cin >> (*p).length;
    cout << "enter breadth: ";
    cin >> (*p).breadth;

    cout << "the area is = " << (*p).length*(*p).breadth << endl;
    return 0;
 }