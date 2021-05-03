#include <iostream>
#include <queue>
using namespace std;

// FIFO structure. 
// el are added from the back and removed from the front 
// push(), pop(), front(), empty()

int main(){

    queue<int> q;
    for(int i=1; i<=5; i++){
        q.push(i);
    }
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}