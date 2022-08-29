// Virtual function in c++
// to learn the virtual function we should learn the function overiding
// Pointers -> Normally a pointer will consist the address of its type only
// eg. float type pointer will held the address of the block which has float type
// But in inheritance there is a concept called parent -> child relationshi
// So if we create the parent class object pointer it can store the address of the child class object


#include<iostream>
using namespace std;

class Car
{
    public:
        virtual void shiftGear(){} // Is pata chalta hai ki is function ke dynmaic binding karni hai ro late binding

};

class SportsCar: public Car
{
    public:
        // coding of the parent class function will have the same function with latest degination hai SportsCar
        void shiftGear(){} // parent protype and the child protoype function are same
        //void f2(){}
};

int main()
{
    SportsCar sc;

    Car *p = &sc; //the parent class can hold the address of the child class obj 

    sc.shiftGear();

    p->shiftGear();// This will call the parent functinlaity
    // At the compile type only poiter type is understandable by the compiler
    // it will not get address of the object becuase it will only get at the runtime
    // Early binding karte waqt wo call ke tupe ko dekhte hain
    // object ke type ko dekhte hain
    // pointer se call karte hain to pointer ke type ko dekhte hain.
    // To yahan pe shifGear functionality() parent class ke chali gi 
    // so to prevent this early binding when the function is called by pointer type.
    // At run time it will decide dynamic binding honi chahiye
    // Up pointer ke content ko adhaar mana jayga agar parent class ka function virtual hai


    return 0;
}