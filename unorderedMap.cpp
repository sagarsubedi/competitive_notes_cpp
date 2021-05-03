#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){

    // has underlying hashtable
    // on average insertion, erase and find is O(1)
    // unless we have to rehash, and in that case O(n)
    // same functions as map

    unordered_map<string, int> m;
    m.insert(make_pair("Mango",100));

       // insert 
    m.insert(make_pair("momo", 10));

    // another way to insert 
    pair<string, int> p;
    p.first = "curry";
    p.second = 8;
    m.insert(p);

    // another way to insert
    m["Sekuwa"] = 12;
    
    // search
    string key;
    cin >> key;

    // returns iterator to the key found
    // find returns iterator type object
    auto it = m.find(key);
    // if the iterator is not the end, then the key is present

    // update price
    // curry -> 10
    // m[key] += 2;

    if(it != m.end()){
        cout << "Price of " << key << " is " << m[key] << endl;
    }else{
        cout << "Food not present" << endl;
    }

    // erase
    // m.erase(key);

    // another way to find key
    // stores unique keys. can't have two same keys
    // if key entered twice, will just update the value
    // count returns 0 or 1
    if(m.count(key)){
        cout << "Price of " << key << " is " << m[key] << endl;
    }else{
        cout << "Food not present" << endl;
    }


    m["choila"] = 9;
    m["tikka"] = 13;
    m["samosa"] = 3;
    m["biryani"] = 14;

    // it points to node that stores key and value so
    // can use it -> first and it -> second
    
    for(auto it=m.begin(); it != m.end(); it++){
        cout  << it->first << " = " << it->second << endl; 
    }
    cout << endl << "Printing without order coz it's unorderedMap" << endl;
    // for each
    for( auto p:m){
        cout << p.first << " = " << p.second << endl;
    }




    return 0;
}