#include<iostream>
#include "sum.h"; // this will take the content of sum.h header file and paste it into this file and after compiling will create a full functions.i file and than linker will link this file to libraries and create .exe file
using namespace std;

//There are 3 steps in making the function
//1. Declartion, defination, call
//declare the function two add two numbers
//int sum(int, int);
int sub(int, int);
void pattern();

//defination of the declared function
int sum(int a, int b)
{
    return a+b;
}

int sub(int x, int y)
{
    return x -y;
}

int main()
{
    //call the declared function two add 2 numbers
    int x,y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    int s = sum(x,y); // call the function and pass by value
    cout<<"the sum of two numbers enter is "<<s<<endl;
    s = sub(x,y); // call the function and pass by value
    cout<<"the sub of two numbers enter is "<<s<<endl;    
    pattern();

    return 0;
}

void pattern()
{
    cout<<"Hello world by prince"<<endl;
}