#include<iostream>
using namespace std;
//private
// In c++ if we do not specify any access specifie it is by default private
// Private member variable only called from inside the class not from iutside the class

//protected
//Still we can not call the protected memebers from outside the class

//public 
// If the instance member variable are public it can access from outside the class

class Add
{
    // public:
    //     int a;
    //     int b;
    // protected:
    //     int a;
    //     int b;
    public:
        int a;
        int b;
};


int main()
{
    Add add; // creating the object of the class Add 
    add.a = 3;
    add.b = 5;

    return 0;
}

// Class is an description of an object
// Object is an instance/example of an class