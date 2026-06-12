#include <iostream>
using namespace std;
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.
class Solution
{
public:
    bool isArmstrong(int n)
    {
        int sum = 0;
        int ogNum = n;
        while (n > 0)
        {
            int lastdigit = n % 10;
            sum = sum + (lastdigit * lastdigit * lastdigit);
            n = n / 10;
        }
        return sum == ogNum;
    }
};

int main()
{
    int n;
    cout << "Enter a number to check whether it's an Armstrong number or not: ";
    cin >> n;
    Solution obj;
    if (obj.isArmstrong(n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    cout << endl;
    return 0;
}