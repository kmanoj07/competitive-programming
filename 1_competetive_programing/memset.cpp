#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //problem 1
    // int a[10] = {0}; // 10 block stored 0 with this intialization
    // cout<<a[5]<<endl;
    
    // int b[10] = {2}; // this wrong it only valid for 0 only
    // cout<<b[3]<<endl; 
    
    //Problem 2
    // int n; cin>>n;
    // //create user oriented array to take the size of array from the user
    // int a[n] = {0}; // this is also variable sized object and can not be initialized
    
    //solution of the above problems to initialize
    //memset() - it will used to store the same value ipn all block
    int n;
    cout<<"Input the size of array: "<<endl;
    cin>>n;
    int a[n];
    memset(a, -1, sizeof(a)); // value --> 0 & -1
    cout<<a[2]<<endl;
    
    int val[9];
    memset(val, -1, sizeof(val));

    for(int i =0; i < sizeof(val); i++)
    {
        cout<<val[i]<<",";
    }
    
    return 0;
}