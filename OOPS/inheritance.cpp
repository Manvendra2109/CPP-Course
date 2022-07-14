// This is all about inheritance that asclass is borrowing the features of existing class
#include <iostream>
using namespace std;
class Base
{
    public:
    int a;
    void display()
    {
        cout << "Dispaly of Base " << a << endl;
    }

};
class Derived: public Base
{
    public:
    void show()
    {
        cout << "Show one of it" << endl;

    }
};
int main ()
{
 Derived d;
 d.a=100;
 d.display();   
 d.show();
}