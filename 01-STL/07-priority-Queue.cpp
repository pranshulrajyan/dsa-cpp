#include <iostream>
#include <queue>
using namespace std;

void explainPQ(){
    //Max-Heap by default
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(1);
    cout << "Top element: " << pq.top() << endl; // Should print 8
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Should print 5
    //to check the size of the priority queue:
    pq.size() > 0 ? cout << "Size: " << pq.size() << endl : cout << "Priority Queue is empty." << endl;
    //to check if the priority queue is empty or not:
    pq.empty() ? cout << "Priority Queue is empty." << endl : cout << "Priority Queue is not empty." << endl;
    //to swap two priority queues:
    priority_queue<int> pq1, pq2;
    pq1.push(10);
    pq1.push(20);
    pq2.push(30);
    pq1.swap(pq2); // Swapping pq1 and pq2
    cout << "Top element of pq1 after swap: " << pq1.top() << endl; // Should print 30
    cout << "Top element of pq2 after swap: " << pq2.top() << endl; // Should print 20

    //Min-Heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(5);
    minPQ.push(2);
    minPQ.push(8);
    minPQ.emplace(1);
    cout << "Top element of minPQ: " << minPQ.top() << endl; // Should print 1
    minPQ.pop();
    cout << "Top element of minPQ after pop: " << minPQ.top() << endl; // Should print 2
}