#include <iostream>
using namespace std;

int main()
{
    int num, count = 1;
    cout << "Enter a number :" << endl;
    cin >> num;

    for ( int i = 0; i < 20; i++){
        for(int j = 0; j < 10; j++){
            cout << num * count << "\t";
            count++;
        }
        cout << endl;
    }
    return 0;
}