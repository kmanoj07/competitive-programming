#include<iostream>
using namespace std;

class Student
{
    private:
        string name;//instance variable
        int age; // instance variable
        int balance;
        static int roi; // static - variable or class variable
    public:
        void setName(string name)
        {
            this->name = name;
        }
        void setAge(int age)
        {
            this->age = age;
        }
        void setBalance(int balance)
        {
            this->balance = balance;
        }
        void display()
        {
            cout<<"Name of the student is "<<name<<endl;
            cout<<"Age of the student is"<<age<<endl;
        }
        void calculateBalance()
        {
            balance = (balance + roi * 0.01 * balance);
            cout<<"The new balance is " << balance<<endl;
        }
};

int Student::roi = 2; // here we initialise the static class member variable outside of class and declare inside the class
// :: this is the membership operator

int main()
{
    Student student1;
    student1.setName("Manoj");
    student1.setAge(20);
    student1.display();
    student1.setBalance(25000);
    student1.calculateBalance();
    static int val;
    cout<<"The default value for the static variable is" << val;
    return 0;
}