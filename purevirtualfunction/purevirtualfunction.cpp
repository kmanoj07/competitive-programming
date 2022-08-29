#include<iostream>
using namespace std;

class Person
{
    public:
        // This is a pure virtual function or no body function
        // In this case cpp decided not to call this function while creating the object of this class
        // So, if the class contains the no body funciton initialise with the 0, the object of this class will not be created.
        // So now what to do
        virtual void fun()=0;// To stop early binding we make it virtual it will know do the late binding and dynamic binding

        void f1() // but this has the method body
        {

        }
};

// But if we are not able to create the object of the class having pure virtual function

class Student: public Person
{
    public:
    // it is necessary you create the fun() with the same prototype and define kijye
        void fun()
        {

        }
};

int main()
{


    return 0;
}