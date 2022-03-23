// in this the 0x61ff0c 0x61ff08 0x61ff0c these are the addresses of the predefined variable its not the error //
#include<iostream>
using namespace std;
int main(){
    int a=30;
    int *p=&a;
    cout << a <<endl;
    cout << &a << endl;
    cout << &p << endl;
    cout << p << endl;
    cout << *p << endl;
     

return 0;
}