#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.get();

    vector<string> s;

    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        s.push_back(temp);
    }

    sort(s.begin(), s.end());

    cout <<"Printing output" << endl;

    for(int i=1; i<n; i++){
        auto found = s[i].find(s[i-1]);
        if(found != std::string::npos){
            string temp;
            temp=s[i-1];
            s[i-1] = s[i];
            s[i] = temp;
        }
    }


    for(string str:s) cout << str << endl;



    return 0;
}