#include <iostream>
#include <string.h>
using namespace std;

struct student {
    string name;
    int roll;
    int m1, m2, m3;
};

int main()
{
    student s1, s2;

    cout << "Enter student 1 details: " << endl;
    cin >> s1.name >> s1.roll >> s1.m1 >> s1.m2 >> s1.m3;

    cout << "Enter student 2 details: " << endl;
    cin >> s2.name >> s2.roll >> s2.m1 >> s2.m2 >> s2.m3;

    int total1 = s1.m1 + s1.m2 + s1.m3;
    int total2 = s2.m1 + s2.m2 + s2.m3;

    cout << "Total marks of " << s1.name << " = " << total1 << endl;
    cout << "Total marks of " << s2.name << " = " << total2 << endl;
    
    if (total1 > total2) 
    cout << "Highest score " << s1.name;
    else 
    cout << "Highest score " << s2.name;

    return 0;

}