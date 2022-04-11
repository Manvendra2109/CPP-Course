#include <iostream>
using namespace std;
int sum (int a, int b)
{
    return a+b;
}
float sum (float a, float b)
{
    return a+b;
}
int sum (int a, int b, int c)
{
    return a+b+c;

}
int main ()
{
    cout << sum(12,5) << endl;
    cout << sum (6.56657f,0.987678f) << endl;
    cout << sum(5,6,7)  << endl;

    return 0;   
    
}