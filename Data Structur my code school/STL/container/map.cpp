#include<iostream>
#include<map>
#include<pair>
using namespace std;

int main(){

    //map
    //usage : count frequency of various objects

    //you can think of this as special arrays in which the indices (keys) of elements
    //can be negative or very big or even strings! These are like python dictionaries php associvate arrays
    //map<key,value> name;
    map<string, int> m;

    //insert
    m["name"] = 12;
    m["world"] = 100;

    //access
    cout << m["name"] <<endl;

    map<int, int> mit;
    mit[-234] = 49;

    //clear
    m.clear();
    m["world"]; // O(log N)

    //since it similar to set
    m.count("world");
    m.find("world");

    m.erase("world");
    m.lower_bound("world");
    m.upper_bound("world");

    //iterators - map iterators work like the set iterators
    //but *(it) this will give you (key, value) pair

    map<string, double> m;
    //insert the value in map;

    //find 
   auto it = m.find("test");

   pair<string, double> = (*it);

    
    return 0;
}