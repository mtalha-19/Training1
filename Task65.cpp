#include <iostream> 
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
    void inputPerson(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;

    }
};
class Student: public Person{
    private:
    int rollNo;
    public:
    void inputstudent(){
        inputPerson();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};
int main(){
    Student s1;
    s1.inputstudent();
    s1.display();
    return 0;
}