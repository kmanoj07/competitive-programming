#include<iostream>
using namespace std;

// Multilevel inheritance
// Transitive relationship
class c //base class
{

};

class d:public c // parent c
{

};

class e: public d // parent d
{
    // e will have the properties and behaviours of d and C

};

int main()
{
    return 0;
}