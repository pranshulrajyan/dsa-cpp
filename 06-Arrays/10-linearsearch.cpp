#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    cout << "enter elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Element not found." << endl;
        return -1;
    }
}