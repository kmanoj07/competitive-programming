#include<iostream>
using namespace std;

//Destructor is an instance member function of a class
//The name of the destructor is same as of class but preceded by (~) symbol
//Destructor can never be static
//Desttructor has no return data type
// Destructor takes no argument(No overloading is possible)
class Complex
{
private:
    int a, b;
public:
    // If we are not passing any argument in destructor than overloading will never happend
    // it is invoked implicitly when object is goign to destroy
    // Destructor will never destory object
    // Destrucot object ki jindagi main chalne wala akhiri funciton hai
    ~Complex(){ cout << "Bye bye I am destructor"<<endl;};
};

int main()
{
    Complex c;
    return 0;
}
// Why destructor is used in C++
// since it is not used to destroy the object but 
// this is gurantee that the destructer will run before object will destroy from the memory
// it should be defined to release resource allocated to object