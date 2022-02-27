#include <iostream>
using namespace std;
int main ()
{
    // Dividend = Divisor * Quotient + Remainder

    int divisor,dividend,quotient,remainder,division;
    cout << " enter the dividend and divisor:";
    cin >> dividend >> divisor;
    quotient = dividend/divisor;
    remainder = dividend - (divisor * quotient);
    cout << " quotient is : " << quotient << endl;
    cout << " remainder is : " << remainder << endl;

    

    return 0;
    
}