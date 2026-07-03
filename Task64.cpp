#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_SUBJECTS = 7;
const int MAX_ADMINS = 3;

/* ================= BASE CLASS ================= */
// Parent class for Admin and Student
class User {
protected:
string username;
string password;

public:
// Pure virtual function (Polymorphism)
virtual bool login(string u, string p) = 0;

```
void setCredentials(string u, string p) {
    username = u;
    password = p;
}

string getUsername() const { return username; }
string getPassword() const { return password; }

virtual ~User() {}
```

};

/* ================= SUBJECT CLASS ================= */
class Subject {
public:
string name;
int creditHours = 0;
int totalClasses = 0;
int presentClasses = 0;

```
float percentage() const {
    if (totalClasses == 0) return 0;
    return (presentClasses * 100.0) / totalClasses;
}
```

};

/* ================= STUDENT CLASS ================= */
class Student : public User {
private:
string email;

public:
string name;
string regNo;
int semester = 1;
bool subjectsAdded = false;
int subjectCount = 0;
Subject subjects[MAX_SUBJECTS];

```
void setPrivateData(string e, string p) {
    email = e;
    password = p;
}

string getEmail() const { return email; }

// Override login (Polymorphism)
bool login(string r, string p) override {
    return regNo == r && password == p;
}

void registerStudent() {
    cout << "Enter Name: ";
    getline(cin >> ws, name);

    cout << "Enter Email: ";
    getline(cin, email);

    cout << "Enter Registration Number: ";
    getline(cin, regNo);

    cout << "Enter Password: ";
    getline(cin, password);

    cout << "Enter Semester: ";
    cin >> semester;
    cin.ignore();
}

void addSubjects() {
    if (subjectsAdded) {
        cout << "Subjects already added.\n";
        return;
    }

    cout << "How many subjects (max 7): ";
    cin >> subjectCount;

    if (subjectCount < 1 || subjectCount > MAX_SUBJECTS) {
        cout << "Invalid number.\n";
        subjectCount = 0;
        return;
    }

    for (int i = 0; i < subjectCount; i++) {
        cout << "Enter Subject Name: ";
        cin.ignore();
        getline(cin, subjects[i].name);

        cout << "Credit Hours: ";
        cin >> subjects[i].creditHours;
    }

    subjectsAdded = true;
}

void viewAttendance() const {
    cout << "\nName: " << name;
    cout << "\nReg No: " << regNo;
    cout << "\nSemester: " << semester << endl;

    for (int i = 0; i < subjectCount; i++) {
        cout << "\nSubject: " << subjects[i].name;
        cout << "\nAttendance: " << subjects[i].percentage() << "%\n";
    }
}
```

};

/* ================= ADMIN CLASS ================= */
class Admin : public User {
public:
bool login(string u, string p) override {
return username == u && password == p;
}
};

/* ================= MAIN SYSTEM ================= */
class AttendancePortal {
private:
Student students[MAX_STUDENTS];
Admin admins[MAX_ADMINS];
int studentCount = 0;
int adminCount = 0;

public:
AttendancePortal() {
loadAdmins();
loadStudents();
}

```
/* ================= FILE HANDLING ================= */
void saveAdmins() {
    ofstream file("admins.txt");
    for (int i = 0; i < adminCount; i++) {
        file << admins[i].getUsername() << "|"
             << admins[i].getPassword() << endl;
    }
}

void loadAdmins() {
    ifstream file("admins.txt");
    if (!file) {
        admins[adminCount++].setCredentials("admin", "123");
        saveAdmins();
        return;
    }

    string u, p;
    while (file >> u >> p) {
        admins[adminCount++].setCredentials(u, p);
    }
}

void saveStudents() {
    ofstream file("students.txt");
    for (int i = 0; i < studentCount; i++) {
        Student* s = &students[i];

        file << s->name << "|"
             << s->getEmail() << "|"
             << s->regNo << "|"
             << s->getPassword() << "|"
             << s->semester << "|"
             << s->subjectCount << endl;

        for (int j = 0; j < s->subjectCount; j++) {
            file << s->subjects[j].name << "|"
                 << s->subjects[j].creditHours << "|"
                 << s->subjects[j].totalClasses << "|"
                 << s->subjects[j].presentClasses << endl;
        }
    }
}

void loadStudents() {
    ifstream file("students.txt");
    if (!file) return;

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        Student s;

        getline(ss, s.name, '|');
        string email, pass;
        getline(ss, email, '|');
        getline(ss, s.regNo, '|');
        getline(ss, pass, '|');
        ss >> s.semester;
        ss.ignore();
        ss >> s.subjectCount;

        s.setPrivateData(email, pass);

        for (int i = 0; i < s.subjectCount; i++) {
            getline(file, line);
            stringstream sub(line);

            getline(sub, s.subjects[i].name, '|');
            sub >> s.subjects[i].creditHours;
            sub >> s.subjects[i].totalClasses;
            sub >> s.subjects[i].presentClasses;
        }

        students[studentCount++] = s;
    }
}

/* ================= CORE FUNCTIONS ================= */
void registerStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Limit reached.\n";
        return;
    }

    Student s;
    s.registerStudent();
    students[studentCount++] = s;

    saveStudents();
    cout << "Student Registered!\n";
}

void studentLogin() {
    string reg, pass;
    cout << "Enter Reg No: ";
    cin >> reg;
    cout << "Enter Password: ";
    cin >> pass;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].login(reg, pass)) {
            int choice;
            do {
                cout << "\n1.Add Subjects\n2.View Attendance\n3.Logout\nChoice: ";
                cin >> choice;

                if (choice == 1) {
                    students[i].addSubjects();
                    saveStudents();
                }
                else if (choice == 2) {
                    students[i].viewAttendance();
                }

            } while (choice != 3);

            return;
        }
    }
    cout << "Invalid Login\n";
}

void adminLogin() {
    string u, p;
    cout << "Enter Username: ";
    cin >> u;
    cout << "Enter Password: ";
    cin >> p;

    for (int i = 0; i < adminCount; i++) {
        if (admins[i].login(u, p)) {
            markAttendance();
            return;
        }
    }
    cout << "Invalid Admin\n";
}

void markAttendance() {
    for (int i = 0; i < studentCount; i++) {
        cout << "\nStudent: " << students[i].name << endl;

        for (int j = 0; j < students[i].subjectCount; j++) {
            char ch;
            cout << students[i].subjects[j].name << " (P/A): ";
            cin >> ch;

            students[i].subjects[j].totalClasses++;

            if (ch == 'P' || ch == 'p')
                students[i].subjects[j].presentClasses++;
        }
    }

    saveStudents();
    cout << "Attendance Updated!\n";
}

void start() {
    int choice;
    do {
        cout << "\n===== PORTAL =====\n";
        cout << "1.Register\n2.Student Login\n3.Admin Login\n4.Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) registerStudent();
        else if (choice == 2) studentLogin();
        else if (choice == 3) adminLogin();

    } while (choice != 4);
}
```

};

int main() {
AttendancePortal portal;
portal.start();
return 0;
}
