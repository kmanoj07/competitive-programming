#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        Complex(int x, int y) // parameterized constructor
        {
            a = x;
            b = y;
        }
        Complex(int k) // constructor overloading
        {
            a=k;
        }
        Complex(){} // default constructor
        // if you have create a parameterized cons than the compiler will not create a default constructor
        //copy const
        Complex(Complex &c)
        {
            a = c.a;
            b = c.b;
        }
};

int main()
{
    Complex c1(3, 4), c2(5), c3(5);
    Complex c4=4;
    // Compiler creates 2 constructor default con, copy cons
    // In this case the compiler will give us copy constructor
    Complex c5(c1); // this passing a complex type in another constructor
    return 0;
}