#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    cout<<"The value: "<<x<<endl;
    //return the address of varaible x in memory
    cout<<"Address of x in RAM "<<&x<<endl;
    //lets save the address in reference variabla
    // to create a reference variable
    int &y = x; // this wil containe the address for the varuable x
    cout<<&y<<endl;
    cout<<&x<<endl;
    cout<<y<<endl;// In this way y is holding the value of x, or y is just and x

    // The reference varaible must be initialied wiht another variable other wise it will give an error
    return 0;
}