#include <iostream>
//1. step include sstream
#include<sstream>
using namespace std;

int main()
{
    //conver integer to string
    //declare integer data
    int num = 39090;
    //declare output string stream
    ostringstream str1; // ostringstream object declare
    //inserting integer data into object of ostringstream
    //<< insertion or put to operator
    str1<<num;
    //declare a string variable where you want to store a string
    string str = str1.str(); // from object of ostringstream we take out the string and store into string
    cout<<str<<endl;
    cout<<typeid(str).name()<<endl; // typeid will give the typedefination and the name() function will give the type in shortcut
    //if it is string its and array of character
    cout<<str[0]<<endl;
    cout<<sizeof(str)<<endl;
    cout<<sizeof(char)<<endl;
    
    return 0;
}