#include<iostream>
using namespace std;

int binarySearch(int* arr, int s, int e, int key){

    if(s > e){
        return -1;
    }
    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    } else {
        return binarySearch(arr, s , mid-1, key);
    }
}

int main(){
    // int arr[6]  =  {20,35,40,50,49,100};
    // int key = 100;
    // int n = 6;

    int arr[4]  =  {1,2,3,4};
    int key = 4;
    int n = 4;

    cout << binarySearch(arr,0,n-1,key);

    return 0;
}