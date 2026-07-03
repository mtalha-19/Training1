#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
    string name;
    float gpa;
    Student (string n, float g) : name (n), gpa (g) {}
    void display() const {
        cout << "Student: " << name << " |GPA: " << gpa << endl;
    }
};
int main() {
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    // Allocate an array of pointers to Student objects
    Student** roster = new Student*[numStudents];

    // Populate the array with dynamically created Student objects
    for (int i = 0; i < numStudents; ++i) {
        std::string name;
        float gpa;
        std::cout << "Enter name for student " << (i + 1) << ": ";
        std::cin.ignore(); // Clear input buffer
        std::getline(std::cin, name);
        std::cout << "Enter GPA: ";
        std::cin >> gpa;

        roster[i] = new Student(name, gpa);
    }

    std::cout << "\n--- Student Roster ---\n";
    // Display elements using the arrow (->) operator
    for (int i = 0; i < numStudents; ++i) {
        roster[i]->display(); 
    }

    // Clean up memory (Delete objects first, then the array of pointers)
    for (int i = 0; i < numStudents; ++i) {
        delete roster[i]; 
    }
    delete[] roster; 

    std::cout << "\nMemory successfully freed." << std::endl;
    return 0;
}