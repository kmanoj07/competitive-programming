#include<iostream>
using namespace std;

//method overiding -- When we want to chnage the implementation of the parent class method inherited in the child class
//method overloding -- When the method have save job in the same class but different number of arguments
//method method hiding -- when the parent class method is overloaded with differnet numbr of argument in the child class 

class Car
{
    public:
        void shifGear(){

        }
        void f1()
        {

        }
};

class SportsCar: public Car
{
    //we want to do mehtod overiding
    public:
        void shiftGear()
        {
            // We will change the implementation here
        }
        //method hiding not method overlaoding
        void fi(int n) 
        {

        }
};


int main()
{
    return 0;
}