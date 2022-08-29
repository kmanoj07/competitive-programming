#include<iostream>
using namespace std;
// formal declartion of class
class A;
class B;

class A
{
    public:
        void display(){}
        void read(){}
        void stop(){}
};

class B
{
    //we need to make all the member function of the class A as friend function of class B
    // Method one membership operator
    // friend function can declare  any where in the scope as they are not part of the class member
    // friend void A::display();
    // friend void A::read();
    // friend void A::stop();
    // if we want all the member function of the class A should become the friend function of the class B
    friend class A;
    // In the above way the member function of class A become the friend function of class A

};

int main()
{
    return 0;
}