#include <iostream>
using namespace std;
// ye tha ek structure banane ke liye ki ye ek rectangle h 
struct rectangle 
{
    int length;
    int breadth;
};
// isme ye initialize kiya ki ye rectangle memory mein point krega ki ye length h ye breadth h
void initialize (struct rectangle *r, int l, int b)
{
    r -> length=l;
    r -> breadth=b;
} 
// this is to find the area of the rectangle by (call by value) and not to show in the output just to run and save in the memory
int area ( struct rectangle r )
{
    return r.length*r.breadth;
}
// this is to change the length by using the pointer
void changelength (struct rectangle *r, int l)
{
    r -> length =l;
}
// isme rectangle ko call kiya address variable ka use krkre usko lenght and breadth initialize kiya; fir area nikala;then again by using the 
// adress variable change kiya uska length
int main ()
{
    struct rectangle r;
    initialize (&r,10,5);
    area (r);
    changelength (&r,20);

}