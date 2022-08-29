#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        A(int k)
        {
            a = k;
        }
        ~A()
        {
            cout<<"The parent destructor call"<<endl;
        }
};

class B : public A
{
    private:
        int b;
    public:
        B(int x, int y):A(y)
        {
            b = x;
        }
        //Destructor
        // it will call whenever the object  of this class will destroy
        ~B()
        {
            cout<<"The child destructor will call"<<endl;
        }

};

int main()
{
    B b(2, 3); // agar aap child class main destructor nahi bhi banate hain to compiler apne app hi parent class ke destructor ko call karta hai
    // as no argument will pass in destructor
    return 0;
}