#include <iostream>
using namespace std;
#include <set>

void explainMultiSet()
{
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    // the multiset allows duplicate values, so we can insert the same value multiple times. In this case, we have inserted the value 1 three times and the value 2 two times. The multiset will store all of these values, and when we iterate through it, we will see all of the duplicates as well.

    // traversing the multiset:
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // counting the number of occurrences of a specific value in the multiset:
    cout << "Count of 1: " << s.count(1) << endl; // Output: 3
    cout << "Count of 2: " << s.count(2) << endl; // Output: 2
    cout << "Count of 3: " << s.count(3) << endl; // Output: 1
    cout << "Count of 4: " << s.count(4) << endl; // Output: 0

    // erasing a specific value from the multiset:
    s.erase(1); // This will erase all occurrences of 1 from the multiset
    cout << "After erasing 1: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // to erase only one occurrence of a specific value:
    s.erase(s.find(2)); // This will erase only one occurrence of 2 from the multiset
    cout << "After erasing one occurrence of 2: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // to erase two occurrences of a specific value:
    s.erase(s.find(1), s.find((1) + 2)); // This will erase two occurrences of 1 from the multiset
    cout << "After erasing two occurrences of 1: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}