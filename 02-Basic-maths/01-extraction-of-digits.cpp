#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter number for extraction of digits: ";
    cin >> N;

    while (N > 0)
    {
        int lastdigit = N % 10;
        cout << lastdigit << endl;

        N = N / 10;
    }
}

//count all digits of a number:
class Solution {
public:
    int countDigit(int n) {
        int cnt = 0;

        while (n > 0) {
            n = n / 10;
            cnt++;
        }

        return cnt;
    }
};
//time complexity of the above solved problem: O(log10(n))