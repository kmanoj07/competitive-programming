#include<iostream>
using namespace std;

int main()
{
    // we are going to make string
    string str; // declaration of the string variable

    str = "Manoj"; // M A N O J

    cout<<"The value of 3rd index is: "<<str[2]<<endl;
    // Change the value at the 3 index
    str[3] = 'M'; // becuse it is array of character 3 rd index pe M insert kiya
    cout<<"The value at the 3 index: "<<str[3]<<endl;

    cout<<"new string is: " <<str<<endl;

    //user takes the input
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<"Out string value is : "<<s<<endl;

    return 0;
}