#include<iostream>
using namespace std;

int area(int, int);
int area(int);
int area(int, double);

int area(int len, int breadth)
{
    return (len * breadth);
}

int area(int r)
{
    return(3.14 * r * r);    
}

int area(int x, double y)
{
    return x * y;
}

int main()
{
    int l, b, r;
    //calculate area of rectangle
    cout<<"Enter the length, breadth, radius"<<endl;
    cin>>l>>b>>r;
    int result = area(l,b);
    cout<<"The are of rectangle is " << result<<endl;

    //calculate are of circle
    result = area(r);
    cout<<"The are of the circle is "<<result<<endl;
    return 0;
}