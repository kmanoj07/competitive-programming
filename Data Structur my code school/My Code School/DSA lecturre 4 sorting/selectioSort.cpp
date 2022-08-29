#include<iostream>
#include<algorithm>
using namespace std;


void print(int* arr, int n) {
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void selectionSort(int* arr, int n) {

    for(int i =0; i<n-1;i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]){
              minIndex = j;
            }
        }
         swap(arr[i], arr[minIndex]);
    }
}


int main()
{
    int arr[] = {120,7,4,1,5,3};
    int n = 6;
    selectionSort(arr,n);
    print(arr, n);

    return 0;
}