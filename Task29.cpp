#include <iostream>
using namespace std;
int square(int n){
    return n * n;
}
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    cout << "Square = " << square(num);

    return 0;
}