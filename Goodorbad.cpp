// Chef is a really nice and respectful person, in sharp contrast to his little brother, who is a very nasty and disrespectful person. Chef always sends messages to his friends in all small letters, whereas the little brother sends messages in all capital letters.

// You just received a message given by a string s. You don't know whether this message is sent by Chef or his brother. Also, the communication channel through which you received the message is erroneous and hence can flip a letter from uppercase to lowercase or vice versa. However, you know that this channel can make at most K such flips.

// Determine whether the message could have been sent only by Chef, only by the little brother, by both or by none.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and K denoting the length of the string s and the maximum number of flips that the erroneous channel can make.
// The second line contains a single string s denoting the message you received.
// Output
// For each test case, output a single line containing one string — "chef", "brother", "both" or "none".

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 100
// 0 ≤ K ≤ N
// s consists only of (lowercase and uppercase) English letters
// Example
// Input

// 4
// 5 1
// frauD
// 5 1
// FRAUD
// 4 4
// Life
// 10 4
// sTRAWBerry

// Output

// chef
// brother
// both
// none
#include<iostream>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        // for each test case 
        // N we get the length of string
        // K no of flips
        // s string
        int n,k;cin>>n>>k;
        string s;cin>>s;
        // get the count of capital letter and small letter
        int clCount =0;
        int slCount = 0;
        for(int i = 0; i < n; i++)
        {
            //get small letter count
            char c = s[i];
            int p = (int)c; //ASCII code
            if(p>=97 && p<=122) // for lower letter the ASCII character 97 - 122 and small 65 -90
                slCount++;
            else
                clCount++;
        }
        cout<<s<<endl;
        cout<<"Small letter count: "<<slCount<<"and Capital letter count: "<<clCount<<endl;
        //Case 1 When capital letter count and small letter cout are equal
        if(clCount == slCount)
        {
            if(k>=clCount){
                //small and capital both are possible
                cout<<"both"<<endl;
            } else if(k<clCount) {
                //neither in small letter and nor in capital letters
                cout<<"none"<<endl;
            }
        }
        else if(clCount < slCount)
        {
            if(k>=slCount){
                cout<<"both"<<endl;
            } else if(k<clCount){
                cout<<"none"<<endl;
            } else{
                cout<<"chef"<<endl;
            }
        }
        else if(clCount > slCount)
        {
            if(k>=clCount){
                cout<<"both"<<endl;
            }else if(k<slCount){
                cout<<"none"<<endl;
            }else {
                cout<<"brother"<<endl;
            }
        }
    }
    return 0;
}