#include<iostream>
#include "file1.h"
//Means the std namespace is define in the file iostream file we include it
//so all the declation of cout, cin object is int std namespace which is in a file iostream
using namespace std;

//Accessing members of namespace
namespace MySpace {
    using namespace MySpace2;

    int a;
    int f1();
    class A {
        public:
            void fun1();
    };
    void fun();
    Hello helloObj;
}

void MySpace::fun() {
    cout << "Welcome to MySpace2";
}

//defination
int MySpace::f1(){
   return 10;
}

void MySpace::A::fun1(){
    std::cout << "Hello fun1";
}

using namespace MySpace;
//using keyword allow us to import namespace into your program with the global scope
//it can be used to import a namespace into another namespace or any program

int main() {
    //to use this namespace
    //use scope resolution
    MySpace::a = 90;
    std::cout<<MySpace::f1()<<""<<endl;
    MySpace::A obj;
    obj.fun1();
    helloObj.hello();
    MySpace::fun();
    return 0;
}

