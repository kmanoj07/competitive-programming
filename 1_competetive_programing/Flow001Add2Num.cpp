
// Problem Statement
// Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

// The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

// Input
// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

// Output
// For each test case, add A and B and display the sum in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 0 ≤ A,B ≤ 10000
// Sample Input 1
// 3
// 1 2
// 100 200
// 10 40
// Sample Output 1
// 3
// 300
// 50
#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    for(int i =0; i<t; i++)
    {
        int a, b;cin>>a>>b;
        cout<<a+b<<endl;
    }
}