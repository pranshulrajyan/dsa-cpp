#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter number for extraction of digits: ";
    cin >> N;
    int revNum = 0;

    while (N > 0)
    {
        int lastdigit = N % 10;
        revNum = (revNum * 10) + lastdigit;
        N = N / 10;
    }
}

// reverse the number 123:
int main()
{
    int n = 123;
    int revNum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        revNum = (revNum * 10) + lastdigit;
        n = n / 10;
    }
    cout << revNum << endl;
}