// this is the basic code i had tried here 
#include <iostream>
using namespace std;
int main ()
{
    int n1,n2,GCD,temp;
    cout << "Enter the values";
    cin >> n1>> n2;
    if(n2>n1)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    for (int i=1; i<=n2; i++)
    {
        if(n2%i==0&&n1%i==0)
        {
            GCD=i;
        }
    }cout << "GCD=" << GCD << endl;
    return 0;

}