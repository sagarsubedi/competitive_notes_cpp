#include <iostream>
#include <set>
using namespace std;

typedef multiset<int>::iterator It;

int main(){

    // elements are ordered
    // can store multiple same element
    // once values are inserted, they can't be modified
    // associative container. Refer by key or value (both are same)
    // elements are refered by value not index
    // underlying implementation uses BST 

    int arr[] = {5,10,20,30,40,20,30,10,10,30,30,75};
    int size = sizeof(arr) / sizeof(int);
    multiset<int> ms(arr, arr+size);

    // iterate over
    // will print all elemts in sorted order even if multiple same values
    // .count() gives occurence
    cout << "Count" << endl;
    for(auto n:ms) cout << n << " " << ms.count(n) << endl;
    cout << endl;

    // will remove all instace of the given key
    ms.erase(10);
    // insert
    ms.insert(50);
    for(auto n:ms) cout << n << " ";
    cout << endl;

    // get iterator to an element
    auto it = ms.find(30);
    cout << (*it) << endl;

    // get all elemtnts which are equal to a value
    // for example for the int 30:
    pair<It, It> p =ms.equal_range(30);
    for(auto it=p.first; it!=p.second; it++){
        cout << *it << " ";
    }
    cout << endl;

    // lower bound and upperbound
    // upper means next bigger value, lower means next bigger value if given value not present
    // to print a range (left exclusive, right inclusive) we can do:
    for(auto it = ms.lower_bound(10); it!=ms.upper_bound(75); it++) cout << *it << " ";
    cout << endl;

    cout << *ms.lower_bound(5) << " " << *ms.upper_bound(70) << endl;

    return 0;
}