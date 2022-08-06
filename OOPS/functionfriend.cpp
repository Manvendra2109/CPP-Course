#include <iostream>
using namespace std;
class Your;
class my
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
    friend Your;

};
class Your
{
    
    public:
    my m;
    void fun ()
    {
        m.a=10;
        m.b=15;
        m.c=2;

    }
};




