#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int GCD(int n1, int n2)
    {
        int gcd = 1;

        for (int i = 1; i <= min(n1, n2); i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                gcd = i;
            }
        }

        return gcd;
    }
};

int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    Solution obj;
    cout << "The GCD of two numbers is: " << obj.GCD(n1, n2) << endl;
}
// time complexity: O(min(n1,n2)) -> worst case
// we can also run the loop from min(n1,n2) to 1 instead of 1 to min(n1,n2) for a better time complexity:
class Solution
{
public:
    int GCD(int n1, int n2)
    {
        int gcd = 1;

        for (int i = min(n1, n2); i >= 1; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                gcd = i;
                break;
            }
        }

        return gcd;
    }
};

int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    Solution obj;
    cout << "The GCD of two numbers is: " << obj.GCD(n1, n2) << endl;
}

// using Euclidean Algorithm:
//gcd(a,b) = gcd(a-b,b) given that a>b;
class Solution
{
public:
    int GCD(int n1, int n2)
    {while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
    }
        if(n1 == 0){
            return n2;
        }
        else{
            return n1;
        }
    
}
        
};

int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    Solution obj;
    cout << "The GCD of two numbers is: " << obj.GCD(n1, n2) << endl;
}