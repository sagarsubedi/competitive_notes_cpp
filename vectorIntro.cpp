// basically an dynamic array
// can grow and shrink in size depending on the number of el
// like ArrayList in java


#include <iostream>
#include <vector>
using namespace std;

int main(){

    // ways to inti vector
    vector<int> a;
    vector<int> b(5,10); // 5 integers and all value 10
    vector<int> c(b.begin(), b.end());
    vector<int> d{1,2,3,4,5,6,7};

    // iterate over vector
    for(int i=0; i<c.size(); i++) cout << c[i] << ", ";

    cout << endl;

    for(auto it = b.begin(); it!=b.end(); it++) cout << (*it) << ", ";

    cout << endl;

    // using for each
    for( int x:d) cout << x << ", ";
    cout << endl;


    // more funcs
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int no;
        cin >> no;
        // adds el to the end of the vector and expands memory if needed
        v.push_back(no);

    }

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    return 0;
}