#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long pop1 = 234532, pop2 = 53442, pop3 = 34567;
    cout << "City  Population" << endl;
    cout << "City 1 " << setw(1) << pop1 << endl;
    cout << "City 2 " << setw(10) << pop2 << endl;
    cout << "City 3 " << setw(10) << pop3 << endl;
    return 0;
}