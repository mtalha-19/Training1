#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a range " << endl;
    cin >> n;

    cout << "Odd numbers: " << endl;
    for(int i = 1; i <= n; i += 2){
        
        cout << i << endl;
    }
    return 0;
}