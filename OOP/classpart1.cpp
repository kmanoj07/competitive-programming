#include<iostream>
using namespace std;

class student
{
    public://access specifier -->private && protected
        string name;
        int age;
        int roll;
};

class box
{
    public:
        int l, b, h;
};

int main()
{

    student std1; // it will create a block in memory
    std1.name= "Manoj kumar paswan"; //. operator or access operator
    std1.age = 20;
    std1.roll = 4;

    cout<<"std1 name is: "<<std1.name<<endl;

    student std2; // object 
    std2.name= "Hari"; //object calling its member variable
    std2.age=23;
    std2.roll=20;

    cout<<"std2 name is: "<<std2.roll<<endl;
     
    box box1;
    box1.l = 12;
    box1.b = 2;
    box1.h = 30;

    int volume = (box1.l * box1.b * box1.h);
    cout<<"This is the volume of the box: "<<volume<<endl;

    return 0;
}