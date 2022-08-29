#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // This is vector stands for dynamic size array
    vector<int> v;
    // cout<<"Bytes: "<<sizeof(v)<<endl;
    // cout<<"Size: "<<v.size()<<endl; // 0 initialy
    // cout<<"capacity: "<<v.capacity()<<endl; // 0 initially
    // to insert vector
    v.push_back(1); // it will insert one element at the end [1, 2, 3, 4]
    v.push_back(2);
    v.push_back(3);
    // now the size 
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    int size = v.size();
    for(int i=0; i < size; i++)
    {
        //becuase size will increase every time
        v.push_back(v[i]); // This will become infinite loop MLE , TLE
    }
    for(int i=0; i < v.size(); i++)
    {
        //becuase size will increase every time
        cout<<v[i]; // This will become infinite loop MLE , TLE
    }
    if(v.empty()) {
        return true;
    } 

    return 0;
}