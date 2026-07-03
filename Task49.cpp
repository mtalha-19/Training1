#include <iostream>
using namespace std;
enum Day { Monday, Tuesday, Wednessday, Thursday, Friday, Saturday, Sunday };
int main()
{
    Day today;
    int choice;
    cout << "Enter day (0=Mon ... 6=Sunday)"<< endl;
    cin >> choice;
    today = (Day)choice;
    if (today == Saturday || today == Sunday)
    cout << "Weekend" << endl;
    else
    cout << "Weekday" << endl;
    return 0;
    
}