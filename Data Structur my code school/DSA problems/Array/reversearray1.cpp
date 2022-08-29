#include <iostream>
#include <algorithm>
using namespace std;

//recursive approach
string reverse(string str) {
    int n = str.length();
    //base case
    if(n == 0){
        return "";
    }
    //inductive step
    return str[n-1] + reverse(str.substr(0, n-1));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;

        int start = 0;
        int end = str.length() - 1;

        // while (start < end)
        // {
        //     swap(str[start], str[end]);
        //     start++;
        //     end--;
        // }
        str = reverse(str);

        cout << str << endl;
    }

    return 0;
}