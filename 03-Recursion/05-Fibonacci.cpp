// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.
// F(0) = 0, F(1) = 1
//  F(n) = F(n - 1) + F(n - 2), for n > 1.
// Qusetin - Given n, calculate F(n).

#include <iostream>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
        {
            return n;
        }

        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Solution obj;
    cout << "The valus of F(n) is : " << obj.fib(n) << endl;
}