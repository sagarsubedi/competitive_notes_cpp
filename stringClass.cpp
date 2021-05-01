// provides alternative for char array
// wraps char array inside string object

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout <<"-----"<< endl;

    // we can init a string obj
    // initialized an object
    string s0;
    // string constructor
    string s1("Hello");
    // literal string assignment
    string s2 = "Hello World";
    // copy constructor
    string s3(s2);
    // assignment
    string s4 = s3;

    char a[] = {'a','b','c','d','\0'};
    // create a string out of char array
    string s5(a);

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    // check if empty string or not
    if(s0.empty()) cout << "s0 is empty" << endl;

    // append char to string
    s0.append("I love cpp");
    s0 += " and cpp is cool";
    cout << s0 << endl;

    // remove or erase content
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    // compare two strings
    s0 = "Apple";
    s1 = "Mango";
    // compares lexographically and returns -1, 0, or 1 just like in java
    cout << s0.compare(s1) << endl;
    if(s0 > s1) cout << "s0 is greater";
    else cout << "s1 is greater" << endl;

    // access ith char of a string
    cout << s1[2] << endl;

    // find substring
    string s = "this is very fun i love it";
    int index = s.find("very");
    cout << "index of very is " << index << endl;

    // remove a word from the string
    string word = "very";
    int len = word.length();
    cout << s << endl;
    s.erase(index, len+1); // start from the index and remove (length of the word) chars
    cout << s << endl;
    // at this point the word "very" will be removed


    // iterate over string
    for(int i=0; i<s.length(); i++) cout << s[i];

    cout << endl << "------------using iterator" << endl;
    // iterators
    // .begin() points to the first el and .end() points to next reigster than the last one
    // .begin and .end will return the poitners so we need * to get the value
    // instead of auto we can do string::iterator
    for(auto it=s.begin(); it!=s.end(); it++) cout << (*it);
    
    cout << endl << "-----------using forEach" << endl;
    // using for each
    for(auto c: s) cout << c;
    cout << endl;

    return 0;
}