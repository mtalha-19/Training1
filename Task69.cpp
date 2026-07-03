#include <iostream>
using namespace std;
class People
{
private:
    string name;
    int age;

public:
    People(string n, int a) : name(n), age(a)
    {
        cout << "Constructor called for " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    People p("Alice", 30);
    return 0;
}