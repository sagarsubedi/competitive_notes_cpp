// similar to map where multiple key can have same value

#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main(){

    multimap<char, string> mm;
    cout << "How many elements? ";
    int n;
    cin >> n;

    // insertion
    for(int i=0; i<n; i++){
        char ch;
        string s;
        cin >> ch >> s;
        mm.insert(make_pair(ch,s));
    }
    // still will be ordered

    // print the map
    for(auto p: mm){
        cout << p.first << " -> " << p.second << endl;
    }

    auto itLower = mm.lower_bound('b'); 
    auto itUpper = mm.upper_bound('c'); // gives one greater than the key

    for(auto iter = itLower; iter!=itUpper; iter++){
        cout << iter->second<<" " << endl;
    }

    // search for value
    auto f = mm.find('c');
    if(f->second == "cat") mm.erase(f);

    cout << endl << "After deleting cat: " << endl;
    for(auto iter = mm.begin(); iter!=mm.end(); iter++){
    cout << iter->second<<" " << endl;
    }

    return 0;
}