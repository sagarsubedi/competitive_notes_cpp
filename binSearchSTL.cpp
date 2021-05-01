#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cout << endl;
    int arr[] = {1,2,3,4,5,6,10,20,30,30,30,40};
    int n = sizeof(arr)/sizeof(int);

    // search in a sorted array
    int key = 5;

    // returns true or false depending on the item is present or nit
    // has to be sorted
    bool present = binary_search(arr, arr+n, key);
    if(present) cout << "Present";
    else cout << "Not present";
    cout << endl;

    // if we want to get the index of the key
    // lower_bound(start, end, key) and upper_bound(start, end, key)
    // both bounds works in log(n) time
    
    // returns index of first element that is >=key
    auto it = lower_bound(arr, arr+n,30);
    cout <<"Lower bound of 7 is: " << (it-arr) << endl;

    // upper_bound() gives first number that is greater than the key
    auto up = upper_bound(arr, arr+n, 30);
    cout << "Upper bound of 30 is: " << (up-arr) << endl;

    // a simple algo that finds the frequency of a key would be upper_bound() - lower_bound()
    int freq;
    freq = up - it;
    cout << "30 appears " << freq << " times." << endl;


    return 0;
}