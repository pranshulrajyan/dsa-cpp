#include <bits/stdc++.h>
using namespace std;

void explainlist(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front(7); //{7,5,2,4}
    //other functions of list:
    ls.begin(); //returns iterator to the first element of the list
    ls.end(); //returns iterator to the past-the-end element of the list
    ls.size(); //returns the number of elements in the list
    ls.empty(); //returns true if the list is empty, false otherwise
    ls.clear(); //removes all elements from the list
    ls.pop_back(); //removes the last element of the list
    ls.pop_front(); //removes the first element of the list
    ls.insert(ls.begin(), 10); //inserts 10 at the beginning of the list
    ls.insert(ls.end(), 20); //inserts 20 at the end of the list
    ls.erase(ls.begin()); //removes the first element of the list
    ls.erase(ls.end()); //removes the past-the-end element of the list (undefined behavior)
    ls.remove(2); //removes all occurrences of 2 from the list
    ls.sort(); //sorts the elements of the list in ascending order
    ls.reverse(); //reverses the order of the elements in the list
    ls.unique(); //removes consecutive duplicate elements from the list
    ls.merge(ls); //merges two sorted lists into one sorted list
    ls.rbegin(); //returns reverse iterator to the last element of the list
    ls.rend(); //returns reverse iterator to the past-the-end element of the list
    ls.resize(5); //resizes the list to contain 5 elements
}