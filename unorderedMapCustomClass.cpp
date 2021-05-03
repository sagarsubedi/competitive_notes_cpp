#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

// lets use unorderedmap for custom class and objects
// if we have custom class then,
// define our own hash function
// overload the == operator or basically create your own comparision

// custom Student class
class Student{

    public:
        string firstName;
        string lastName;
        int id;

        // full constructor
        Student(string fname, string lname, int i){
            firstName = fname;
            lastName = lname;
            id = i;
        }

        // custom comparision
        bool operator==(const Student &s) const{
           return id == s.id;
        }
};

// now define hash function
class HashFunction{

    public:
        // simple hash function that just produces int based on the length of full name
        size_t operator()(const Student &s) const{
            return s.firstName.length() + s.lastName.length();
        }

};

int main(){

    // int is the datatype of key
    unordered_map<Student, int, HashFunction> student_map;

    Student s1("Sagar", "Subedi", 1);
    Student s2("Sikshya", "Bhusal", 2);
    Student s3("Nareen", "Winget", 3);

    // add student to hashmap
    student_map[s1] = 99;
    student_map[s2] = 100;
    student_map[s3]  = 88;

    for(auto s:student_map){
        cout << s.first.firstName <<" "<< s.second << endl;
    }




    return 0;
}