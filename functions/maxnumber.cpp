#include<iostream>
using namespace std;
int max(int, int);

int main()
{
    int c = max(5,6);
    cout<<"The maximum number is "<<c;
    return 0;
}

int max(int a, int b)
{
    //return a > b ? a : b;
    if(a>b)
        return a;
    else
        return b;
}