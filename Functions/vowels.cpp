#include <iostream>
using namespace std;
char vowels (char step)
{
    if(step=='a'||step=='e'||step=='i'||step=='o'||step=='u')
    return 'v';
    else 
    return 'c';

}
string vowels2 ( char step  )
{   
     if(step=='a'||step=='e'||step=='i'||step=='o'||step=='u')
    return "vowels";
    else 
    return "consonants";

}
int main ()
{
    char step;
    string r;
    cout << "step" << endl;
    cin >> step;
    r=vowels2(step);
    cout << "answer is :"  << r << endl;
    return 0;
}