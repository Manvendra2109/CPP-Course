#include <iostream>
using namespace std;
int main()
{
    char nahi;
    cout << "Enter the character :" << endl;
    cin >> nahi;
    if(nahi=='a'||nahi=='e'||nahi=='i'||nahi=='o'||nahi=='u')
    cout << "vowels" << endl;
    else 
    cout << "consonant" << endl;
    return 0;
}
 