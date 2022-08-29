#include <iostream>
using namespace std;

int getLargest(int *A, int N)
{
    int largest = A[0];
    for (int i = 1; i < N; i++)
    {
        if (A[i] > largest)
        {
            largest = A[i];
        }
    }
    return largest;
}

int solve(int *A, int N)
{
    if (N == 1)
    {
        return -1;
    }

    int largest = getLargest(A, N);
    cout << largest << endl;

    // if all array elements are equal
    bool allEleSame = false;
    for (int i = 0; i < N; i++)
    {
        if (largest == A[i])
        {
            allEleSame = true;
        } else {
            allEleSame = false;
        }
    }
    // now get the second largest which will be the just smaller than the largest
    if (allEleSame)
    {
        return largest;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] == largest)
            {
                A[i] = -1;
            }
        }
    }

    largest = getLargest(A, N);
    return largest;
}

int main()
{
    int arr[] = {45, 65, 45, 45, 45, 45, 45, 45};
    int secondLargest = solve(arr, 8);
    cout << secondLargest << endl;
    return 0;
}