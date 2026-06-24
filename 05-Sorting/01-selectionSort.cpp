#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements as per the size of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int minm = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minm])
            {
                minm = j;
            }
            swap(arr[minm], arr[i]);
        }
    }
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}