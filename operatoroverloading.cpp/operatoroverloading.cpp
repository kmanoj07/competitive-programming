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
        Complex add(Complex c2)
        {
            Complex c;
            c.a = a + c2.a;
            c.b = b + c2.b;
            return c;
        }
        Complex sum(Complex c2)
        {
            Complex c;
            c.a = a + c2.a;
            c.b = b + c2.b;
            return c;
        }
        //If you want to use any operator ad function name we can do that
        // But only those opertor are allowed which are available in c++ and are valid operator
        // so this we need to write operator key word
        //When operator is overloading whith multiple job, it is known as operator overloading.
        //it is a way to implement compile time polymorphism
        // you can not overload sizeof() and ? operator to overloading
        Complex operator +(Complex c2)
        {
            Complex c;
            c.a = a + c2.a;
            c.b = b + c2.b;
            return c;
        }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(4, 3);
    c2.setData(5, 6);
    // For now this will give error as the compiler will not understand to add the non primitive type to add like this
    //c3 = c1 + c2;
    //c3 = c1.add(c2);
    //c3 = c1.sum(c2);
    c3 = c1.operator+(c2);
    c3 = c1+c2;
    c3.showData(); 
    return 0;
}
