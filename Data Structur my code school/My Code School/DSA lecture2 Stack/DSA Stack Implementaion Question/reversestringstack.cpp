#include<iostream>
#include<stack>
using namespace std;


//cost to time - O(n)
//cost ot memory- stack - O(n)
void reverse_string(char *str, int n) {
    stack<char> s;

    //scan the str char array left to right
    for(int i=0;i<n;i++){ //O(n)
        s.push(str[i]); // O(1)
    }

    for(int i=0;i<n;i++){ //O(n)
        if(!s.empty()){
            str[i] = s.top(); // O(1)
            s.pop();
        }
    }
}

int main(){

    char str[] = "Manoj kumar paswan";

    reverse_string(str, 18);
    cout << str << endl;

    return 0;
}