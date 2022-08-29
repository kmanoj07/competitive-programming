#include<iostream>
#include<set>
using namespace std;

int main(){
    //set
    // just like in mathmatics the set is a container which
    //keeps the distinct or a unique copy of every element on sorted order.
    //(In java the same behavior is shown by TreeSet)
    set<int> s; //empty set of integers
    set<string> s;//empty set of strings

    //important functions;
    s.insert(12); //insert the element into the set, do nothing if already present. O(long N)
    s.erase(12); //erase the value of x from set if present. O(log N)
    s.count(12); //return 0 if x is not in the set and 1 if x is in set. O(long N);
    s.clear();//erase all elements. O(n);
    s.size();//returns the current size of the set O(1);

    //[] this operator is not allowed in set
    // we need iterator to access the elements inside the set

    //set iterators
    //set iterators offer less features than vector iterators.
    auto it = s.begin();
    it++, it--, ++it, --it;//O(long N) times valid operations

    //Function related to set iterators
    //this return and iterator if the value found. Return s.end() if not found O(log N)
    s.find(12);
    s.lower_bound(1); //return the iterator to the first element which is >=x . Returns s.end() O(long N)
    s.upper_bound(1); //return the iterator to the first element which is > x. Retruns s.end() if not found O(log N);
    s.erase(it); //erase the element with iterator it. O(log N)
     
    return 0;
}