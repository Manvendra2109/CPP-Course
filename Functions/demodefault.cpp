#include <iostream>
using namespace std;
void swap ( int x, int y)
{
    cout << x << " " << y << endl;
    int temp;
    temp =x;
    x=y;
    y =temp;
    cout << x << " " << y << endl;

}
int main ()
{
    int x=25;
    int y=20;
    swap(x,y);
    cout << x << " " << y<< endl;
    return 0;
}