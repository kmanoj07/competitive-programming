#include<iostream>
using namespace std;

int main()
{
    // loop basic - initialization , condition, increment
    int i;
    for(i =0; i<=10; i++) {
        cout<<"The value is: " << i <<endl;//every time the condition satisfy this will print and increment the initialization by 1 step means add 1 to previous value
    }

    for(i = 10; i >=0; i--){
        cout<<"The value is: "<<i<<endl;
    }

    for ( int i = 0; i <= 10; i = i + 2) // move to step forward
    {
        cout<<"The value is "<<i<<endl;
    }
    return 0;
}