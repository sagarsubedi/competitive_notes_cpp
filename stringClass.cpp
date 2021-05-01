// provides alternative for char array
// wraps char array inside string object

#include <iostream>
#include <string>
using namespace std;

int main(){

    // we can init a string obj
    // 
    string s0;
    string s1("Hello");
    string s2 = "Hello World";
    string s3(s2);


    return 0;
}