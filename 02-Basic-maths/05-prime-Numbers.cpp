#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    int n;
    cout << "Enter a number to check whether its prime or not: ";
    cin >> n;

    Solution obj;
    if (obj.isPrime(n))
    {
        cout << "the number is prime";
    }
    else
    {
        cout << "the number is not prime";
    }
    cout << endl;
}