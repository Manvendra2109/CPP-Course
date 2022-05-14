// isme character wala seen nhi samajh aarha h
#include <iostream>
using namespace std;
void displaynum (int n1, float n2 , char n3)
{
    cout << "the int number is :" << n1 << endl;
    cout << "the double number is :" << n2 << endl;
    cout << "the character is :" << n3 << endl;
}
 main ()
{
    int num1 = 5;
    double num2= 5.5;
    char num3= 55;
    displaynum(num1,num2,num3);
    return 0;
}