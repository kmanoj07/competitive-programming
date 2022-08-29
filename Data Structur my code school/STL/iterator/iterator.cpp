#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    //iterator behave a lot like pointers.
    vector<int> v = {10,15,12,5,20};
    vector<int>::iterator it =  v.begin();
    auto it = v.begin();
    //so its a pointer to begin element on the list
    cout << (*it) << "" <<endl;

    it++;
    cout << (*it) << "" <<endl;

    it--;
    cout << (*it) << "" <<endl;

    cout << *(it + 3) << endl;


    //pointers
    int arr[5] = {10,15,12,5,20};
    
    int *p = arr;

    cout << (*p) << " "<<endl;

    p++;
    cout << (*p) << " "<<endl;

    p--;
    cout << (*p) << " "<<endl;

    cout << *(p+3)<<endl;
    
     
    return 0;
}