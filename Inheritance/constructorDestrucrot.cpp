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
};

class B: public A
{
    private:
        int b;
    public:
        B(int x, int y):A(y) // yahan pe parent class la construcot chala
        {
            b = x;
        }
};


int main()
{
    //When we create an object of class B
    //Compiler will create default constructer of the child class
    // But the child class main parent class ke member bhi hai
    // To child class ka constructor hi parent class ke construcot ko call karege
    // Call hone ka order --> child to parent
    // Execute hone ka order ---> parent to child

    // child class construcot always call the default constructor of its parent class
    // If there is no default constructor in parent class and prameterized constructor is there it will throgh an error

    B b1(2, 3);
    return 0;
}