#include<iostream>
using namespace std;

int main()
{
    //pointers
    int a = 5;
    int* p; // this is pointer variable of type int meand it will hold the address of another int type variable'
    p = &a; // & address of operator

    cout<<"Address of a variable is stored in p "<<p<<endl;
    // to get the value stored in this addes we dereferenced it
    cout<<"value of a variable is stored at aaddress p "<<*p<<endl;

    //So it means the variable holds the address of p is also having the address
    //the pointer variable has also the address
    cout<<&p<<endl;

    int** x = &p; // this variable stores the address of the another pointer variable
    cout<<**x;

    return 0;
}