#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array as per size: ";
    for(int i = 0; i<n; i++){
        
        cin >> arr[i];
    }

    //precomput:
    int hash[13] = {0} ;//given that the max element of array is 12
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the number: ";
        cin >> number;

        //fetch
        cout << "The number of times it apperared in array is " << hash[number] << endl;
    }
    return 0;

}