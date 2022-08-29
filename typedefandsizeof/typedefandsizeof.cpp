#include<iostream>
using namespace std;

//typedef we can chnage the name of the data type may be int, double, float, char, string
typedef int piku;

int main()
{
    // std::cout<<"Hello world"<<endl;
    // int a;
    // a =4;
    // cout << a <<endl;
    // piku num = 56;
    // cout << num << endl;
    // //sizeof operator --> we need to know the size of operator
    // int size = sizeof(int); // it will return the size of the int data type
    // cout<<"Size of int "<<size<<endl;// This will give the size of the data type in bytes

    // int age = 29;
    // int ageVariablesize = sizeof(age);
    // cout << "size of age variable is" << ageVariablesize<<endl;

    // cout<<sizeof(short int) << " bytes" << endl;
    // cout<<sizeof(short) << " bytes" << endl;
    // cout<<sizeof(bool) << " bytes" << endl;
    // cout<<sizeof(double) << " bytes" << endl;
    // cout<<sizeof(float) << " bytes" << endl;

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num; // extraction operator
    cout<<"The value of num is: "<<num;
    cin>>num; // it does not depend on the cout to tell or display the message to user

    return 0; // it is not compulsory to return 0 if you do not return this, it will return by defaulr 0 menan it ecexution is successful,
}