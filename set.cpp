#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main(){

    // container the stores unique collection of el
    // like set in maths
    // ordered by default
    // most operation O(logN)
    // can't just update el: remove el at a pos, insert at that pos
    
    int arr[] = {10,20,31,11,9,8,11,10};
    int n = sizeof(arr) / sizeof(int);

    set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    // iterate and print
    for(set<int>::iterator it = s.begin(); it!=s.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
    // prints unique and ordered el

    // can accept value or iterator pointer
    s.erase(11);
    // auto it = s.find(11)
    // s.erase(it);
    for(set<int>::iterator it = s.begin(); it!=s.end(); it++) cout << (*it) << " "; 


    return 0;
}