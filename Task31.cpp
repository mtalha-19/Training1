#include <iostream>
using namespace std;

int maxima(int a, int b){
    if (a > b)
    return a;
    else
    return b;
}
int main()
{
    int num1, num2;
    cout << "Enter first number:" << endl;
    cin >> num1 >> num2;

    cout << "Maxima = " << maxima(num1, num2) << endl;
    return 0;
}