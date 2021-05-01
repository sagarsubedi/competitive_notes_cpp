#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.get();

    string s[100];

    for(int i=0; i<n; i++){
        getline(cin, s[i]);
    }

    // lets sort the array
    // sorting will be lexographically
    // we can also make out own compare method and use that here like
    // sort(s, s+n, compare); assuming there is a boolean function called compare
    sort(s,s+n);

    cout << "---printing content---" << endl;
    for(int i=0; i<n; i++){
        cout <<s[i]<< endl;
    }


    return 0;
}