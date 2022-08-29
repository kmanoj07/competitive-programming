#include<iostream>
using namespace std;

class A
{

};
class B
{

};
// There is no relationship between class A and class B
// but c will have Class A and B Properties as well as behaviour
class c:  public A, public B // It has two parent class 
{

};

int main()
{
    return 0;
}