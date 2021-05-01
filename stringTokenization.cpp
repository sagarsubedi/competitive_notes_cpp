#include <iostream>
#include <cstring>
using namespace std;

// can be used to break string into list of tokens
// returns character pointer
// accpets char array and delimiter to use to break the string into tokens
// internally creates a new array with the tokens and returns the address of the first token
// returns a token on each subsequent call
// maintains the state of the string internally
// so if we call passing null, then next time it will give the second token


int main(){

    char s[100] = "Today is a rainy day";

    char *ptr = strtok(s," ");
    // ptr now will point to the first token value
    cout << ptr << endl;
    
    // use while to get all the tokens
    while(ptr != NULL){
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}