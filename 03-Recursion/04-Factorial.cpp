#include <iostream>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if(n == 0){
            return 1;
        }

       
        return n * factorial(n-1);
    }
};

int main(){
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;

    Solution obj;
    cout << "Factorial of given Number is : " << obj.factorial(n) << endl;
}