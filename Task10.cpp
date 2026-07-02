#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "Enter a number";
    cin >> num;
    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;
    
    cout << "Reversed number: " << units << tens << hundreds << endl;
    
    return 0;
}