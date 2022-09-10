// ofs means of stream hota h
// trunc is used as truncate to remive the older data and provide a new data
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"Bakri"<<endl;
    ofs<<21<<endl;
    ofs<<"nashebaaz"<< endl;

    ofs.close();    
}