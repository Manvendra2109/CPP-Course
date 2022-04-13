// default arguments mein ye hota h ki agar hm kisi bhi value ko deafault kr dete hn to compiler or program dono default value hi lega agr koi 
// koi value dete hn to wo default value ko overwrite kr dega//
#include <iostream>
using namespace std;
int add (int a,int b,int c,int d=0)
{
    return a+b+c+d;
}
int main()
{
    cout << add(2,5,5) << endl;
    cout << add(2,5,5,0) << endl;
    cout << add(4,3,2,3) << endl;
  
    return 0;
}