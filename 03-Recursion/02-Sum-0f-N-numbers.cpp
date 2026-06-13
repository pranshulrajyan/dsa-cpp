#include <iostream>
using namespace std;
// to calculate Sum of first N numbers:
class Solution
{
public:
    int NnumbersSum(int N)
    {
        if (N == 0)
        {
            return 0;
        }

        return N + NnumbersSum(N - 1);
    }
};

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    Solution obj;
    if (obj.NnumbersSum(N))
    {
        cout << "the sum is: " << obj.NnumbersSum(N) << endl;
    };
}