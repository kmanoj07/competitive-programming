#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {a=x;b=y;}
        void showData()
        {
            cout<<"A = "<<a<<"B ="<<b<<endl;
        }
        // This is how the + operator overloding is done
        Complex operator +(Complex c)
        {
            Complex temp;
            temp.a = a+ c.a;
            temp.b = b+c.b;
            return temp;
        }
        // make the + as friend function
        friend Complex operator +(Complex, Complex);

};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    //temp.a  = a + c1.a; // Yahan pe a nahi likh sakte kyunki ye caller object la mana jayega
    temp.a = c1.a+c2.a;
    temp.b = c1.b+c2.b;
    return temp;
}


int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(4, 6);
    // c1 ne + ko call kiya c2 as an argument pass hua
    //c3 = c1 + c2;// c3 = c1.operator+(c2);\

    // For friend function as it do not have called object
    //+ as friend function call hua aur c1, c2 object as an argument pass hua
    //So it is a friend function we will pass the one more argument as it has not called object
    c3 = operator+(c1, c2);

    return 0;
}