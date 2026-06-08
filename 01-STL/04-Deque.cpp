#include <bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(3); // {3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}
    
    dq.pop_back(); // {4, 3, 1}
    dq.pop_front(); // {3, 1}   

    dq.back(); //means last element of the deque
    dq.front(); //means first element of the deque
}
// STL container functions similar to vector:
// begin, end, rbegin, rend, clear, insert, size, swap
// Refer to vector implementation for iterator behavior details