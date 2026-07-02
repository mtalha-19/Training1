#include <iostream>
using namespace std;

struct student {
    string name;
    int Rollno;
    float marks;
};

int main(){
    student s;

    cout << "Enter name: " << endl;
    cin >> s.name;
    
    cout << "Enter Rollno: " << endl;
    cin >> s.Rollno;

    cout << "Enter marks: " << endl;
    cin >> s.marks;
    
}