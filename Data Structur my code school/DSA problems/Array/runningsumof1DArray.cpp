#include <iostream>
using namespace std;

int *runningSum(int *arr, int n)
{
    // dynamic arry of the same size
    int *prefixSumArr = new int[n];
    int pIndex = 0;
    // sum of the 0th index will be the same in running sum of an array
    prefixSumArr[pIndex] = arr[0];

    for (int i = 1; i < n; i++)
    {
        int currIndexVal = arr[i];
        prefixSumArr[pIndex] = prefixSumArr[pIndex++] + currIndexVal;
    }
    // instead of returning the sum
    // return prefixSumArr[pIndex];
    // returning the array
    return prefixSumArr;
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    //8383803711 Aman kumar
    //kumar.aman@scaler.com
    int arr[5] = {3, 1, 2, 10, 1};
    int *sum = runningSum(arr, 5);
    printArr(sum, 5);
    return 0;
}