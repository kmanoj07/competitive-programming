// You're given an integer N. Write a program to calculate the sum of all the digits of N.

// Input
// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, calculate the sum of digits of N, and display it in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Example
// Input
// 3 
// 12345
// 31203
// 2123
// Output
// 15
// 9
// 8

#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int T;cin>>T;//3
    //Method 1
    // for(int i = 0; i < T;  i++)
    // {
    //     int num,sum=0; 
    //     cin>>num;// 2347
    //     //get each digit from the number and add it
    //     while(num != 0)
    //     {
    //        int digit = num % 10;
    //        sum += digit;
    //        num /= 10;
    //     }
    //     cout<<sum<<endl;
    // }
    
    //Method 2:
    while(T--) // 3, 2, , 0 - false -- loop stop
    {
        // int to str
        ostringstream str1;
        int num;cin>>num;
        //insert this int to output str1
        str1<<num;
        string str = str1.str();
        long long int sum = 0;//8 bytes memory
        for(int i =0; i< str.length(); i++) 
        {
            //iterate 
            char ch  = str[i];// get each char from iterator 
            int n = (int)ch; //type cast char ko
            //since its decimal digit number 0-9 ASCII Code 48 -57
            n = n-48;
            sum += n;
        }
        cout<<sum<<endl;
    }   
    return 0;
}