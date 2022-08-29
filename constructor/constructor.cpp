#include<iostream>
using namespace std;

//constructor
// It is a special type of function
// its name is same as it name of class
//it has not any return type
//it must be instance member function not static

//use of the constructor
//Constructor is use for the initializing the instance membere variable

//As the object is created the constructor executed first
//object ki jindagi main sabse phele chalne wali cheez constructor hai
class Box
{
    public:
        int length;
        int breadth;

        //const
        Box()
        {
            cout<<"Constructer is executed"<<endl;
        }
};

class Student
{
    public:
        int std;
        int age;
        int roll;

        Student() // default constructor -- Here we have change the defination of the default behviour of the constructor
        {
            std = 5;
        }
};

class complex
{
    private:
        int a,b;
    public:
        complex() 
        {
            cout<<"This controle comes here"<<endl;
        };
        complex(int x, int y) // constructor --> basically its special function --> Parameterised const
        {
            a = x;
            b = y;
        }
        
        void displayComplexNumber()
        {
            cout<<"The complex number: "<<a<<", "<<b<<endl;
        }
};

class area
{
    private:
        int a,b;
    public:
        void setData(int, int); // declaration here
        // {
        //     a = x;
        //     b = y;
        // }
};
//give the defination for the funciton of area.
void area::setData(int x, int y) //and the member function can access the private and public memeber variable of the same class
{
    a = x;
    b = y;
}

int main()
{
    //Box box; // As soon as the object is created the first thing is constructor call will happen
    // Student manoj;
    // manoj.age = 20;
    // manoj.roll = 44;

    // cout<<"Std "<<manoj.std<<endl;
    complex c1; // As we know that the compiler gives us the default constructor if we do not provide any other constructor to compiler.
    complex c2(5, 8);// paramaterized constructor
    c2.displayComplexNumber();

    area a;
    a.setData(5,7);

    return 0;
}