#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void showData()
        
        {
            cout<< "\na= "<<a<<"b ="<<b<<endl; 
        }
        Complex operator -() // Since this job is for unary operator we do not need an formal argument
        {
            Complex temp;
            temp.a = -a; // This value will be related to called object
            temp.b = -b; 
            return temp;
        }
        // lets used the pre increment operator overloading
        Complex operator ++()
        {
            Complex temp;
            temp.a =  ++a;
            temp.b = ++b;
            return temp;
        }
};

int main()
{
    Complex c1, c2;
    c1.setData(4, 3);
    // + is a binary operator as it operates on two operands
    // unary operator does not operated on two operands
    //c2=c1.operator-(); // unary operator
   // c2 = -c1; // Unary operator main caller object ek hi hain
    c2 = ++c1;
    c2.showData();
    return 0;
}
