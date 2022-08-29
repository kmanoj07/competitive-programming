#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    // default mode out put mode ios::out
    // The old content of this file will erased and new content will come
    fout.open("mynewfile.dat", ios::app|ios::binary); // we can open the file in append and binary mode
    fout<<"Hello \nworld"; // This new line wil depend on the file mode weather it is open in binary mode than \n as it is write ho jayga aur text mode main open hua hai to uska meaning nazar ayega

    // Text mode is the defualt 
    // ios::binary means the file is opening in binary mode
    // Binary mode can be specified with ios:binary
    
    return 0;
}