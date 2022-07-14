// This is all about inheritance that asclass is borrowing the features of existing class
#include <iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout << "Dispaly of Base" << endl;
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
 d.display();   
 d.show();
}