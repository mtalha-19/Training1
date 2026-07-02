#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
int main()
{
    int x, y;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    cout <<"Sum = " <<add(x,y);
    
    return 0;

}