#include<iostream>
using namespace std;
int main(){
    string name = "boy";

    // cout << name;
    int i = 0;
    while(name[i] != '\0')
    {
        cout << name[i] << endl;
        i++;
    }

    for(i = 0; name[i] != '\0'; i++)
        cout << name[i] << " ";


return 0;
}