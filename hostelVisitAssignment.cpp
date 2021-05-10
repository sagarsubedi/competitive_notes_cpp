// Dean of MAIT is going to visit Hostels of MAIT.
// As you know that he is a very busy person so he decided to visit only first "K" nearest Hostels.
// Hostels are situated in 2D plane.
//  You are given the coordinates of hostels and you have to answer the Rocket distance of Kth nearest hostel from origin ( Dean's place ) .
// Constraints
// 1 < = k < = Q < = 10^5
// -10^6 < = x , y < = 10^6 


#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main(){
    int nrQueries, k;
    cin >> nrQueries;
    cin >> k;
 
    priority_queue<long long> distances;

    while(nrQueries != 0){
        int query;
        cin >> query;


        if(query == 1){
            double x, y;
            cin >> x;
            cin >> y;
            long long distance = pow(x,2.0) + pow(y,2.0);
            distances.push(distance);

        }else{
            while(distances.size()>k){
                distances.pop();
            }
            cout << distances.top() << endl;
        }
        nrQueries--;
    }





    return 0;
}