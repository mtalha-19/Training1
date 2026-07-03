#include <iostream>
using namespace std;
int main(){
    int n;
    float f;
    char c;
    double d;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Enter a float: ";  
    cin >> f;
    cout << "Enter a character: ";
    cin >> c;
    cout << "Enter a double: ";
    cin >> d;
    cout << "Integer: " << n* sizeof(int) << endl;
    cout << "Float: " << f* sizeof(float) << endl;
    cout << "Character: " << c* sizeof(char)<< endl;
    cout << "Double: " << d* sizeof(double) << endl;
    
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    return 0;
}