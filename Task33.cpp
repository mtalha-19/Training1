#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    cout << islower(ch);

    return 0;
}
