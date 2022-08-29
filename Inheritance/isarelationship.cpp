//Banana is a fruit
//Relationship --> When there are relationship between tow entities than it is known as Association
//--Aggregation
//--Composition
//--Inheritance
#include<iostream>
using namespace std;


//faculty teaches a student
//chair is a wood
//if is a relationship hota hai to parent class - > child class banti hai
//The generalised category will be a parent class
//The specific categoty is child class
// Rectangle is a Quadrilateral
// In this case the Quadrilateral is parent class
// Rectanlge is a specific case

// Why public Inheritance when is A relationship is there.
class car
{
    private:
        int gear;
    public:
        void incrementGear()
        {
            if(gear < 5)
            {
                gear++;
            }
        }
};

//agar sprotscar ka object banaunga to sare varibale available honge but accessible nahi hoga if private
//parent class main jo public member bana hua wo child calass ain bhi public member banega agar public inheritance hua hai to
// parent class main jo public hai wo protected banega in child class agar protected inheritance hoga
// parent class main jo public hai wo private banega in child class agar private inheritance ho raha ho to 

class SportsCar: public car // Why public in a relation ship
{

};

class Animal
{
    public:
        void eating()
        {
            cout<<"Eating"<<endl;
        }
};

class Cat: public Animal
{

};

class Array
{
    private:
        int a[10];
    public:
        void insert(int index, int val)
        {
            a[index] = val;
        }
};

// STACK is implement by Array in vertically
// LIFO (Last in first out)
// In stack you can only put the value on the top not between the element
class STACK: private Array // Stack is implemented by Arrau
{
    private:
        int top;
    public:
        void push(int val)
        {
            insert(top, val);
        }
};


int main()
{
    STACK s1;
    s1.push(34);
    

    //lekin koi agar chahega to ye bhi to ho sakta hai na
    // now ab insert function ab child class ka private memeber hai.
    //s1.insert(2, 256); // kyunki insert function parent class main bana hai aur wo public memeber in parent class main aur public ineheritance ke chalte public hi mil rahi hai child ko

    return 0;
}