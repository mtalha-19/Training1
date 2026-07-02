#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter a number: " << endl;
    cin >> n;

    while (n != 0){
        n = n / 10;
        count++;
    }
    cout << "Digits = " << count << endl;
    return 0;
}