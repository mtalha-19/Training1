#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int sum = 0;
    cout << "Enter the range: " << endl;
    cin >> n; 
    for ( int i = 0; i <= n; i++){
        sum += i;
    }
    cout << "Sum ="<< sum << endl;
    return 0;
}