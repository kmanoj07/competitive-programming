#include<iostream>
#include<algorithm>
using namespace std;

void print(int* arr, int n) {
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
}


void bubbleSort(int* arr, int n)
{
    for(int i=1;i<n;i++) {
        bool flag = false;
        for(int i= 0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
}

int main()
{   

    int arr[] = {1,2,3,4,5,6};
    //int arr[] = {8,7,1,2,5,3};
    
    int n = 6;
    bubbleSort(arr, n);
    print(arr, n);    
    
    return 0;
}