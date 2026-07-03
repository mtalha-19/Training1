#include <iostream>
using namespace std;

void change(int x) {
    x = 100;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 10;

    cout << "Before function call: num = " << num << endl;

    change(num);

    cout << "After function call: num = " << num << endl;

    return 0;
}