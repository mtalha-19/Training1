#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int marks;
    public:
    void setData(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayData(){
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main(){
    Student student;
    student.setData();
    student.displayData();
    return 0;
}