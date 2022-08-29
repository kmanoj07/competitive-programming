#include<iostream>
using namespace std;


int main()
{
    int a;
    cout<<a<<endl; // this will give the garbage value

    // lets create space for 10 integer variable in memory
    //we can create an array with size 10 -
    // Means in RAM memory will have the contigous space
    // arr will have the address of starting block
    int arr[10]; // this static size array static memory allocation

    // What we need to do if the array size become small and we need 15 size array
    int arr2[15];
    // And we will copy all the value from the above arr to arr2
    //lest create 
    int arr3[100];
    // in the above case we only use the 65 block and remainig are not in used
    // the memory will waste in this case
    
    // So to prevent from this c++ give and alternative
    // Dynamic Arrays
    // In this type of array the size will start with 0
    // now when we start entering the element in this array


    return 0;
}