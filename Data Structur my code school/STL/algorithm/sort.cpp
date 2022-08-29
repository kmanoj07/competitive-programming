#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//STL 

//container
//algorithm
//iterator


int main()
{
    //vector<int> v1; //empty vector of integers
    //vector<int> v2(10);//vector of integer with 10 elements means isze 10 (all 0)
    //vector<char> v3(10, 'h');//vector if char with 10 element (all h)

    //operations
    
    //insert -- insert the value x to the end of the vector O(1)
    //push_back();

    //delettion/removal -- it removes the ele from the last
    //pop_back();

    //erase all elements
    //v.clear() O(n)

    //v.size()-returns the current size of the vector O(1)
    //[] -operator can be used to access the ele like an array

    //dynamic array just like ArrayList in java

    // vector<int> v;
    // cout << v.size() << "\n";

    // v.push_back(10);
    // v.push_back(5);
    // v.push_back(6);
    // cout << v.size() << "\n";

    // v.pop_back();
    // cout << v.size() << "\n";

    // v.clear();
    // cout << v.size() << "\n";

    //vector<int> v(50, 10); //size 50 all 10
    
    //cout << v[3] << endl;


    //vector<int> v[50]; //this is an array of 50 vectors

    //Importance of vector


    //Sort function
    // This function can be used to sort and array or a vector or a string.
    // The underlying algorithm is called the gcc_sort which is a hybrid algorithm which is implemeneted in a very 
    // effcient way. O(Nlong)

    //if you manually write a sorting function.It will be slower than the this.
    //Usage:
    // int a[n]; sort(a, a+n);

    // vector<int> v;
    // sort(v.begin(), v.end());

    // string s;

    // sort(s.begin(), s.end());

    //Note begin() and the end() are called iterator. 
    //begin() iterators give the itertor pointer at starting position.
    //end() gives the pointer after the last position


    // int a[4] = {5,4,1,2};
    // sort(a,a+3);

    // for(int i=0;i<4;i++){
    //     cout << a[i] << " ";
    // }cout << endl;

    return 0;
}