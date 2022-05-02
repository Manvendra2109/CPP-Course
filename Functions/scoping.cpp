// scopimg mein jo mein variable hota h usko recal krne ke liye [::] iska use krna padega 
#include <iostream>
using namespace std;
int g=10;
int main ()
{
    int g=40;
    {
        int g=30;
        {
            cout << g << endl;
        }
       
    }cout << g << endl;
    cout << ::g << endl;
    return 0;
    

}