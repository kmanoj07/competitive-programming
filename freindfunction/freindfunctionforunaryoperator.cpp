#include<iostream>
using namespace std;

//overloading of unary operator as friend function
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void getData()
        {
            cout<<"A = "<<a<<"B ="<<b<<endl;
        }
        //lets overload the unary operator as member function
        Complex operator-()
        {
            // caller object is a argument itself here
            Complex temp;
            temp.a = -a;
            temp.b = -b;
            return temp;
        }
        //lets do operator overloading as friend function
        // While creating the friend function there will ne no called object
       friend Complex operator-(Complex);

};

Complex operator-(Complex c)
{
    Complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return temp;
}

int main()
{
    Complex c1, c2;
    c1.setData(1, 2);
    //c2 = -c1; // c1.operator-(); // because unary operator overloading no argument we are passing
    c2 = c1.operator-();
    // though we are using the friend function there will be no caller object
    // When you call unary operator as friend since there will be not caller object we need to pass an argument

    c2 =operator-(c1); 
    c2.getData();
    return 0;
}