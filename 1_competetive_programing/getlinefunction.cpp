#include<iostream>
//this heade contains the declration for the idetifier getline()
#include<string>
//this is to include sstream
#include<sstream>
using namespace std;

int main()
{
    string s;
    //cin>>s;
    getline(cin, s); // in this way we can store the paragraph in a variable
    cout<<s<<endl;

    //extracting the each words from the paragraph
    //create and object of stringstream
    stringstream str(s); // declare the stringstream class and initialise the s
    string word;
    while(str >> word) // this is where we extract the words from the str of stringstream
    {
        cout<<word<<endl;
    }
    return 0;
}