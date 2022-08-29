#include<iostream>
using namespace std;

//private -- User 1 will not access it
//public -- User 1 and user 2 both can access it
//protected
// -- User 1 who will create the object of this class will never access it 
// -- it will available accessible by the derived class

//Types of users of a class
// - User 1 will create Object of your class
// - User 2 will derived class from your class

class A // if no visibiltiy mode is used than by default it is private
{

};

class B: public A
{

};


// now understanding the visibility mode



int main()
{
    return 0;
}