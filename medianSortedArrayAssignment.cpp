// We are given two sorted arrays of same size n. 
// Find the median of an array formed after merging these two sorted arrays.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    int size;
    cin >> size;

    int *arr1 = new int(size);
    int *arr2 = new int(size);

    for(int i=0; i<size; i++) {
        int temp;
        cin >> temp;
        arr1[i] = temp;
    }

    for(int i=0; i<size; i++) {
        int temp;
        cin >> temp;
        arr2[i] = temp;
    }

    int *merged = new int(2*size);
    int ptr1=0, ptr2=0;
    for(int i=0; i<2*size; i++){
        if(i%2==0){
            merged[i] = arr1[ptr1];
            ptr1++; 
        }else{
            merged[i] = arr2[ptr2];
            ptr2++;
        }

    }

    sort(merged, merged+(size*2));

    cout << merged[size-1];


    delete[] arr1, arr2, merged;

    return 0;
}