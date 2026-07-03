#include <iostream>
using namespace std;
class Student {
private:
 int marks;
public:
 Student(int m) {
 marks = m;
 }
 friend void showMarks(Student s);
};
void showMarks(Student s) {
 cout << s.marks;
}
int main() {
 Student s(90);
 showMarks(s);
 return 0;
}