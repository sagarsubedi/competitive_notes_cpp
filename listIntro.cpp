// like a doubly linked list
// it's a linear DS where we store el like an array but not continuos memory
// useful methods: push_back(), push_front(), pop_back(), pop_front(), insert(), erase(), remove()


#include <iostream>
#include <list>
using namespace std;

int main(){

    // inits
    list<int> l;
    list<int> l2{1,2,3,4,5,6};
    list<string> ls {"apple", "dog", "banana"};

    // add to the end
    ls.push_back("strawberry");
    // sort the list
    ls.sort();
    // reverse el
    ls.reverse();

    for(string fruit : ls) cout << fruit << " - ";
    cout << endl;

    // see the front el
    cout << ls.front() << endl;

    // remove front
    ls.pop_front();
    for(string fruit : ls) cout << fruit << " - ";
    cout << endl;
    // add to the front
    ls.push_front("kiwi");

    // using iterator
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << (*it) << " - ";
    }
    cout << endl;

    // remove el by value
    string f;
    cin >> f;
    ls.remove(f);

    for(string fruit : ls) cout << fruit << " - ";
    cout << endl;

    // erase one or more el
    // can't use direct access bcoz not linear 
    auto it = ls.begin();
    // cant do it+1 bcoz next memory doesn't belong to the list
    it++;
    // erase returns An iterator pointing to the element that followed the last  
    // element erased by the function call. So assign the iterator to the returned one
    it = ls.erase(it);

    for(string fruit : ls) cout << fruit << " - ";
    cout << endl;

    ls.insert(it, "cherry");

    for(string fruit : ls) cout << fruit << " - ";
    cout << endl;

    return 0;
}