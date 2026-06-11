#include<iostream>
#include<map>
using namespace std;

void explainMap(){
    map<int, int> m;
    m[1] = 2;
    m.insert({3,1});
    m.insert({2,4});
//traversing a map
    for(auto it: m){
        cout << it.first << " " << it.second << endl;
    }
//accessing an element
    cout << m[1] << endl; //2
    cout << m[2] << endl; //4
    cout << m[3] << endl; //1

//size of map
    cout << m.size() << endl; //3
//finding an element
    cout << m.count(1) << endl; //1
    cout << m.count(4) << endl; //0
//finding an element using iterator:
    auto it = m.find(2);
    cout << (*it).second << endl; //4
//lower bound and upper bound
    auto it = m.lower_bound(2);
    cout << (*it).second << endl; //4
    auto it = m.upper_bound(2);
    cout << (*it).second << endl; //1
}