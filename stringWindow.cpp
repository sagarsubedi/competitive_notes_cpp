#include <iostream>
#include <string>
#include <map>
using namespace std;


// Ravi has been given two strings named string1 and string 2. He is supposed to find the minimum length substring
// of the string1 which contains all the characters of string2. Help him to find the substring
// input => qwerty asdfgh qazxsw
//          qas
// output => qazxs

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s, t;
    getline(cin, s);
    getline(cin, t);

    int n=s.size(), m=t.size();
    int l=0, r; 

    map<char, int> freq_s, freq_t;
    int resl=-1, resr=999;

    // insert all char in the map and put correspoding count
    // it will have frequencies of the char in the string
    for(auto x:t) freq_t[x]++;

    for(r=0; r<n; r++){

        // check whether string from l to r is a match
        freq_s[s[r]]++;
        bool good = true;

        for(auto x:freq_t){
            // x is {char, int}
            // if if the char has 0 count in freq_s OR if that char in freq_s has less frequency than in freq_t
            // then it is not good
            if((freq_s.count(x.first) == 0) || freq_s[x.first] < x.second){
                good = false;
                break;
            }

        }

        // if string window from left to right is not good. continue
        if(!good) continue;

        // else, the string is good so try to move the l from the left closer to r
        // for every r, move l forward based on:
        // AND if the current char at l is not needed then move too OR 
        while(l<n && l<=r && (freq_t.count(s[l]) == 0 || freq_s[s[l]] > freq_t[s[l]] )){
            freq_s[s[l]]--;
            // if we don't care about those chars, then just remove those chars left to the l
            if(freq_s[s[l]] == 0) freq_s.erase(s[l]);
            l++;
        }

        if(resr-resl+1 > r-l+1){
            resl = l;
            resr = r;
        }

    }  

    // if resl value has never changed then the string was not found. So print No String
    if(resl == -1) cout << "No String" << endl;
    else{
        cout << s.substr(resl, resr - resl + 1);
    }

    return 0;
}