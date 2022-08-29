//To use vector in cpp
// include header file
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    //declaration of vector
    vector<int> v; 
    //now add element into vector is the only way to insert is push_back
    v.push_back(20);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(90);

    //Iterators //pointers
    //sort means arrange karte hai
    //arrange asc to descending
    //5
    sort(v.begin(),v.end()); // v.begin to v.end now its sorted

    v.pop_back();
    int k = (int)v.size(); // to get the size of the vector
   
    for(int i =0; i<k; i++)
    {
        cout<<v[i]<<endl;
    }


    
    return 0;
}