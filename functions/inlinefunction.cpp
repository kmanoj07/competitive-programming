#include<iostream>
using namespace std;
int add(int, int);

//inline is a request for compiler not a command
// we are requesting to compiler please make it inline
// so depends on the compiler wheater to make it inline.
inline int add(int x, int y) 
{
    return (x+y);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int result = add(a,b); // this is inline function means it will replace the add(a, b) with function code itself in one line
    cout<<"The result is "<<result<<endl;
    return 0;
}

