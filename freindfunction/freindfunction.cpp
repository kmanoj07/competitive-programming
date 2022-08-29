// friend function is not member function of a class to which it is a friend
// friend function is declared in the class with freind keyword
// and must be defiend outside of the class to which it is friend
// Friend function can access any member of the class if which it is friend
// Friend function cannot access members of the class directly
// it has no caller object
// it should not be defind with the membership label as the static function are declared and __cpp_user_defined_literals


//Friend function can be freind of the differnr class at the same time


#include<iostream>
using namespace std;
//formal declaration for class B
class B;

class A
{
    private: // by default class member are private
        int a;
    //freind function is not a member function so, eithere you declare in public or private block do not matter
    public:
        void setData(int x){
            a = x;
        }
        friend void fun(A, B);
};

class B
{
    private:
        int b;
    public:
        void setData(int y)
        {
            b= y;
        }
        friend void fun(A, B);
};



void fun(A a1, B b1)
{
    cout<<"Sum is = "<<a1.a+ b1.b<<endl;
}

class complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void getDate()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        // create a freidn function here 
        //friend void fun(complex); // declared inside the class
};

//define outside the class
// no need to use friend key word now
//sice the friend function are call witough called object
// It will not easy to determin which object membere variable are this
// void fun(complex c1)
// {
//     cout<<"sum is "<<c1.a+c1.b;
// }

int main()
{
    complex c1, c2;
    c1.setData(3, 4);
    c2.setData(5,4);
    //the friend funtion can call independentiy 
    //fun(c1); // we can not call this type of the function without of the actual praametere
    
    //A freind fucntion can access the member variable of different class
    // It is not possible by member function 
    // As the member function only access the member variable of the same class
    A a;
    a.setData(1);
    B b;
    b.setData(2);
    fun(a, b);
    
    return 0;
}