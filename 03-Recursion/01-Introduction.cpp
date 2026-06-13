#include <iostream>
using namespace std;
// to print first n numbers using recursion:
int cnt = 0;
int n;
void recursion()
{
    if (cnt == n)
    {
        return;
    }

    cout << cnt << endl;

    cnt++;
    recursion();
}

int main()
{
    cout << "Enter a number: ";
    cin >> n;
    recursion();
}
// using backtracking:

void backtrack(int i, int n)
{
    if (i < 1)
    {
        return;
    }

    backtrack(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    backtrack(n, n);
}