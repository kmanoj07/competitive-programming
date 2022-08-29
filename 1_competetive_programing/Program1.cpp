// Write a program in which, there is n (1, n) Numbers of names is given,
// now find out the names contains the String "prince" or not...if yes then print "yes"
// and if not then print "no".

// Formats: in the first line value of n is given
// Now from the second line onwards "n" numbers of names is given.

// For example
// 4
// Prince
// Ram
// Shayma
// Sam
// output yes or no
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n number"<<endl;
    cin>>n;
    //cout<<n<<endl;
    string n1, n2, n3, n4;
    cout<<"Enter names :"<<endl;
    cin>>n1>>n2>>n3>>n4;
    // cout<<n1<<endl;
    // cout<<n2<<endl;
    // cout<<n3<<endl;
    // cout<<n4<<endl;
    if (n1 == "prince") 
    {
        cout<<"yes"<<endl;
    }
    else if(n2 == "prince")
    {
        cout<<"yes"<<endl;
    }
    else if(n3 == "prince")
    {
        cout<<"yes"<<endl;
    }
    else if(n4 == "prince")
    {
        cout<<"yes"<<endl;
    }
    else 
    {
        cout<<"no"<<endl;
    }

    return 0;
}