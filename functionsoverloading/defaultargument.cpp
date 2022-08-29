#include<iostream>
using namespace std;
int add(int, int, int, int, int, int);

int add(int a, int b, int c=0, int d=0, int e=0, int f = 0)
{
    return a+b+c+d+e+f;
}

int main()
{
    int result = add(1,2);
    result = add(1,2,3,4,5);
    result = add(1,2,3,4,5,6);
    cout<<"The result is"<<result<<endl;
    return 0;
}