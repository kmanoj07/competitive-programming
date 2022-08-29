#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void gtData()
        {
            cout<<"A = "<<a<<"B "<<b<<endl;
        }

        //we can overload the << (insertion operator) by friend function
        // we can overload the >> (extraction operatory) by freind function
        //ostream class ka referece liya kyunki opnject nahi create ka sakte
        friend ostream& operator<<(ostream&, Complex);
        friend istream& operator>>(istream&, Complex&);


};

ostream& operator<<(ostream &dout, Complex c)
{
    // actual main dout contains the reference of object cout so we can write cout as well there
    dout<<"\nA= "<<c.a<<"B ="<<c.b<<endl;
    return(dout);
}

istream& operator>>(istream &din, Complex &c) // we take this as reference as we need to change into the actual argument
{
    din>>c.a>>c.b;
    return (din);
}

int main()
{
    Complex c1;
    cout<< "Enter a complex number";
    // >> Explain this extraction operator
    // cin is an object standard input out put class
    // >> a memberfunction which overloaded in the class
    cin>>c1;
    //cin ne ek >> function ko call kiya aur c1 ko as argument pass kiya
    //cin.operator>>(c1);
    // agar hum . nahi lagana chahate hain
    // operator>>(cin, c1);

    // it means cin jis class ka object hai us class main 
    // >> operator ke ek se jayda version hai yani overloaded hain
    // kai baar >> int, double,char we used different type
    //This line gives is array there is n0 >> function in class of object cin is overloaded for passing an argument as non primtive type, it only works fro primitive data types
    //cin>>c1;

    // Similarly for << insertion operator
    cout<<"you enterred"<<endl;
    //There is no operator which takes an argument for object type in the class of type cout object
    cout<<c1;
    // friend function hai to iska caller object to hota nahi to argument pass hoga
    //operator<<(cout, c1);

    
    
    
    return 0;
}