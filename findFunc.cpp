#include <iostream>
#include <algorithm> // to use the find() algorithm

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    
    int key = 15;

    // search algorithm: find()
    // will return the address of the found data or the size of array
    auto it  = find(arr, arr+n, key);
    // if you subtract pointers, you get the number of "boxes" between them
    // arr is the first index it is the index that the number belongs to
    // if number not found: it = 5 - 0 because returns 5 and arr is 0
    int index = it - arr;

    if(index == n){
        cout << "not present" << endl;
    }else{
        cout << index << endl;
    }


}