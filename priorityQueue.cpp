#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        name = "default";
        age = 0;
    }

    Person(string n, int a){
        name = n;
        age = a;
    }
};

// we need this class bcoz priority_queue doesn't know how to compare
// the objects of the class we just made
class PersonCompare{
public:
    // compares based on who is older. 
    bool operator()(Person A, Person B){
        return A.age < B.age;
    }
};


int main(){

    // underlying data strucutre is heap
    // we can push and pop according to certain priority
    // push and pop is log(n) and top is O(1)
    // default priority is max_heap()

    priority_queue<int> pq; // this is max_heap()
    // priority_queue < int, vector<int>, greater<int> > pq; // will reverse the priority
    for(int i=1; i<=5; i++) pq.push(i); 

    // remove el
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl <<"Person time" << endl;
    int n;
    cin >> n;

    priority_queue< Person, vector<Person>, PersonCompare > pp;

    for(int i=0; i<n; i++){
        string name;
        int age;
        cin >> name >> age;
        Person p(name, age);
        pp.push(p);
    }
    
    // in heap we can extract el in log(n) time
    // if we want top k el, we can do in Klog(n) time
    // better than sorting
    
    int k = 3;
    cout << endl << "Printing top " << k << " people:" << endl;
    for(int i=0; i<k; i++){
        Person p = pp.top();
        cout << p.name << " " << p.age << endl;
        pp.pop();
    }
    cout << endl;

    return 0;
}