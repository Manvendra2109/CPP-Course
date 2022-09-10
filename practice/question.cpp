// iss code mein choti si galti thi jo ki if wale format mein double bracket ka use nhi kr paya tha isliye result thoda kharab aa rha tha 
#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout << "Enter the all three subjects marks :" << endl;
    cin >> A >> B >> C;
    if((A+B)/2>=35)
    {
        cout << "Pass";
    }
   
   else if ((B+C)/2>=35)
    {
        cout << "pass";
    }
   
    else if ((A+C)/2>=35)
    {
        cout << "Pass";
    }
     else 
    cout << "fail";
return 0;
}