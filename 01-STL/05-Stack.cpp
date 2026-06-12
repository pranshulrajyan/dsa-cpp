#include <iostream>
#include <stack>
using namespace std;

void explainStack()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element: " << s.top() << endl; // Output: 3
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Output: 2
    cout << "Stack size: " << s.size() << endl;           // Output: 2

    cout << s.empty() << endl; // Output: 0 (false)
    s.pop();
    s.pop();
    cout << s.empty() << endl; // Output: 1 (true)

    stack<int> s1, s2;
    s1.swap(s2); // Swapping two stacks
}