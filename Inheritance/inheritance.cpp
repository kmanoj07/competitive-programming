// So, Inheritance is a process of inheriting properties and behaviours of existing class into new class

// lest we want to represent a car
#include<iostream>
using namespace std;

// This is the description of a car
// it consist the properties and the action related to them
// This will act as template for the car
// Whenever we create and object of the car class than it will take a memory in the RAM
// So, every object will represent different car, with differnet variables
class car // base class ya parent class
{

};

// There will be a demand for Sports Car
// In this we will take all the properties from the car, with extra added properties 
// and the action as well with extra added function
// We will reuse all the properties and the action from the car and we will add the special properties and action related to sports car
// We will use the inheritance here
// Means jo nai class SportsCar ne car class ke properties ko le liye, there is a relationship
// class className: visibilty_mode parentClass_name
// visibility mode prublic, private, protected
class SportsCar: public car // child class ya derived class
{

};



int main()
{

 return 0;   
}