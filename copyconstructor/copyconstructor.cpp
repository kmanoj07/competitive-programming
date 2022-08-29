#include<iostream>
using namespace std;

class complex
{
    public:
        int a, b;
    public:
        complex(int x, int y)
        {
            a = x;
            b = y;
        }
        complex(int x)
        {

        }
        complex()
        {}
        // our own copy constructer
        complex (complex &c1) // we strore the reference of c1  object
        {
            a = c1.a; // here c2 is calling belong t c2
            b = c1.b; // here c2 is calling belong to c2
        }
};

int main()
{
    complex c1(2,4);
    //lets create a new object and copy the value of c1 object to c2
    complex c2(c1); // copy c1 into c2
    cout<<c2.a<<" "<<c2.b<<endl;

    return 0;
}

// This is the concept related to copy constructror
// When we create object our compiler creates two constructor
//1. default constructer
//2. copy constructer
// scenario1 -> When we create parameterized constructor it will not create default constructer but will create copy constructer
// scenario2 -> When we create copy construtor of our own it will create not create copy constructer by default.