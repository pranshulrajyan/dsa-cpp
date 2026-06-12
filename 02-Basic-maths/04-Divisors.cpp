#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

class Solution
{
public:
    vector<int> divisors(int n)
    {
        vector<int> ans;

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans.push_back(i);

                if (i != n / i)
                {
                    ans.push_back(n / i);
                }
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    int n;
    cout << "Enter number to find its divisors: ";
    cin >> n;

    Solution obj;

    vector<int> result = obj.divisors(n);

    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " " << endl;
    }
}