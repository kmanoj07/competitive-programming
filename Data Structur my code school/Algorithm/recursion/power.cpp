#include<iostream>
using namespace std;

int pow(int x, int n){
    //base case
    if(n==1 || n== 0){
        return x;
    }

    int partialAns = pow(x, n-1);
    return x * partialAns;
}

int main(){
    cout << pow(2,0);
    return 0;
}