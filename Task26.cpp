#include <iostream>
#include <string.h>
using namespace std;

struct Bankaccount {
    string name;
    int accno;
    double balance; 
};
int main()
{
    Bankaccount a1, a2, a3;

    cout << " Enter 3 accounts " << endl;
    cin >> a1.name >> a1.accno >> a1.balance;
    cin >> a2.name >> a2.accno >> a2.balance;
    cin >> a3.name >> a3.accno >> a3.balance;

    Bankaccount Highest = a1;
    Bankaccount lowest = a1;

    if(a2.balance > Highest.balance) Highest = a2;
    if(a3.balance > Highest.balance) Highest = a3;

    if(a2.balance < lowest.balance) lowest = a2;
    if(a3.balance < lowest.balance) lowest = a3;

    cout << "Highest Balance is" << Highest.name << endl;
    cout << "Lowest Balance is " << lowest.name << endl;

    if(a1.balance > 1000) cout << a1.name << "Low Balanace!" << endl;
    if(a2.balance > 1000) cout << a2.name << "Lower Balance!" << endl;
    if(a3.balance > 1000) cout << a3.name << "Lowest Blanace!" << endl;

    return 0;
}