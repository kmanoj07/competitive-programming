#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//want to return the multiple value from the function
pair<int, int> f(){
    return {3,3};
}

int main(){

    //Pair
    // advantage : In case you want to return the multiple value from a function


    //A way of creating a composite data-type composed of two primitive or composite data type

    //declartion
    pair<int, int> p; // a pair of 2 int
    pair <int, string> p; //a pair for int and string
    pair<int, pair<int, string>> p; // a pair fo int and (pair of int and string)
    pair<vector<int>, string> p; // a pair of a vector of int and  a string

    //Accessing element from pair using .first and .second

    pair<string, int> p = {"hello", 6};
    cout  << p.first << " " << p.second << endl;
   
   
   
   //so we have an array of pairs.
   pair<int, int> p[5]; // an array of 5 pairs

   vector<pair<int, string>> v;

   sort(v.begin(), v.end());
   
   
    return 0;
}