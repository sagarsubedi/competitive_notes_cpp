#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<int> d{1,2,3,4,5,6};
    // add el to the end and expand vec if needed.
    // generally O(1)
    d.push_back(16);
    for(int x:d) cout << x << " ";
    cout << endl;

    // pop back
    // removes the last el
    d.pop_back();

    
    // insert el in the middle
    // in the 3rd index (or 4th pos) insert 100
    d.insert(d.begin()+3, 100);
    // insert 4 100s starting in the 3rd pos
    // d.insert(d.begin()+3, 4, 100);

    for(int x:d) cout << x << " ";
    cout << endl;

    // erase el in the middle
    d.erase(d.begin()+3);
    // d.erase(d.begin()+3, d.begin()+5); will erase starting from 3rd to 5th ind
    for(int x:d) cout << x << " ";
    cout << endl;

    // to resize or shrink
    // vector size becomes 8
    // but the underlying capacity will not change if you're trying to reduce
    // will increase if trying to expand
    // d.resize(8);

    // d.clear(); // will remove all the elements
    // won't delete the memory occupied by the array 
    
    if(d.empty()) cout << "empty" << endl;
    else cout << "not empty" << endl;
    
    // get the first and last el of the vector
    cout << d.front() << endl;
    cout << d.back() << endl;

    // doubling is expensive so we can use reserve
    vector<int> d;
    // reserve 500 elements for this vec
    d.reserve(500);


    return 0;
}