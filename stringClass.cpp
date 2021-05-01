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

    return 0;
}