#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front: " << q.front() << endl; // Output: 1
    cout << "Back: " << q.back() << endl;   // Output: 3
    cout << "Size: " << q.size() << endl;   // Output: 3
    q.pop();
    cout << "Front after pop: " << q.front() << endl; // Output: 2
    return 0;
}