#include<iostream>
#include<climits>
using namespace std;

int richestAccountSum(int accounts[3][3], int n)
{
    int maxWealth = INT_MIN;
    int custLen = n;
    int accLen = sizeof(accounts[0])/sizeof(int);

    for(int i=0;i<custLen;i++)
    {
        int wealthSum = 0;
        for(int j=0;j<accLen;j++)
        {
            wealthSum += accounts[i][j];
        }
        if(wealthSum > maxWealth)
        {
            maxWealth = wealthSum;
        }
    }

    return maxWealth;

}

int main()
{
    //i = row is customer and j = col is account
    int arr[3][3] = {{2,8,7}, {7,1,3}, {1,9,5}};

    int richestCustomer = richestAccountSum(arr, 3);

    cout << richestCustomer << endl;
    
    return 0;
}