// if the data type is in the charcter form then the pointer is in the form of charcter also //
// In this for making the pointer null so we use {{nullptr}} instead of using [NULL] and to making it pointer we use to do deletion in array first//
# include <iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    p[0]=1;
    p[1]=2;
    p[3]=3;
    p[4]=4;
    p[5]=5;
    cout << p[4] << endl;

    delete[]p;
    p=nullptr;

    return 0;

}