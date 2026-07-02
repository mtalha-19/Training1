#include <iostream>
using namespace std;
 
int main()
{
    int choice;
    float temp;

    cout << "Type 1 to convert fahrenhiet to celcius.\n" ;
    cout << "2 to convert Celcius to fahrenhiet.\n";
    cin >> choice;

    if (choice == 1){
        cout << "Enter temp in fahrenheit";
        cin >> temp;
        cout << "In Celcius thats " << (temp - 32) * 5 / 9;
        
    }
}