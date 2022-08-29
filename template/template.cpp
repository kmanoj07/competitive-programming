#include<iostream>
#include<conio.h>
// it is a standard library. As the cin and cout class are the part of standard library
using namespace std; 

// Create a function to find the maximum of two
// int maxNum(int, int);

// int maxNum(int num1, int num2)
// {
//     if(num1>num2)
//     {
//         return num1;
//     }
//     else
//     {
//         return num2;
//     }
// }

// double maxNum(double, double);

// double maxNum(double num1, double num2)
// {
//     if(num1>num2)
//     {
//         return num1;
//     }
//     else
//     {
//         return num2;
//     }
// }

// In the above code we only do the overloading due to the data types
// As the function is same with same job
// Rather than creating the more overloaded version of the same function we generalized the function.

// so we create a function template or generic function
// syntax for function template
// template <class x> x functionName(x num1, x num2)
template <class x, class y> // the placeholder 
x maxNum(x num1, y num2) // In this case the x is a placeholder and will replace by the datatype either in int, double, float
{
     if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    // for this function template the two place holder are having different data type
    cout<<maxNum(4.3, 3)<<endl;
    return 0;
}