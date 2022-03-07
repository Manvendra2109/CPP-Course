# include <iostream>
using namespace std;
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10},i,key;
    cout << "Enter key:" << endl;
    cin >> key;
    for (i=0; i<10; i++)
    {
        if (key==A[i])
        {
            cout << "founded is: " << i << endl;
            return 0;
        }
    } cout << "Not found:" << endl;
    return 0;
}