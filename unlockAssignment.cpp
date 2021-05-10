#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

    // int n, k;
    // cin >> n;
    // cin >> k;
    // int largestInd = 0;
    // vector<int> v;
    // int size = n;

    // solution 1
    // brute-force. Works but gives TLE


    // for(int i=1; i<=n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for(int i=0; i<size; i++){
    //     largestInd = i;
    //     if(k==0)break;
    //     // find the greatest from i to the end
    //     for(int j=i; j<size; j++){
    //         if(v[j] > v[largestInd]) {
    //             largestInd = j;
    //         }
    //     }
    //     // once largest found
    //     if(v[i] != v[largestInd]){
    //         int temp = v[i];
    //         v[i] = v[largestInd];
    //         v[largestInd] = temp;
    //         k--;
    //     }
    // }
    // for(int x:v) cout << x << " ";


    // solution 2
    int n, k;
    cin >> n >> k;
    vector<int> v;
    unordered_map<int, int> m;

    // get the elements and store in vec and map (givenNumbers:position);
    for(int i=0; i<n;i++){
        int x; 
        cin >> x;
        v.push_back(x);
        m[v[i]] = i;
    }

    for(int i=0; i<n&&k>0;i++){
        int x = n-i;
        if(v[i] == x){
            // already correct so continue
            continue;
        }
        int index = m[x];
        m[v[i]] = index;
        m[x] = i;
        swap(v[i], v[index]);
        k--;
    }

    for(int i=0; i<n; i++) cout << v[i] << " ";
    

    return 0;
}