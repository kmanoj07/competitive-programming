#include<iostream>
#include<stack>
using namespace std;


bool valid_paranthesis(string str) {
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        } else if(str[i]==')' || str[i] == '}' || str[i] == ']'){
            if(s.empty()){
                return false;
            } 
            s.pop();
        }
    }
    return s.empty() ? true:false;
}



int main(){
    
    string str = "()()[]]";
    if(valid_paranthesis(str)) {
        cout <<"Yes"<<endl;
    } else {
        cout << "No"<<endl;
    }


    return 0;
}