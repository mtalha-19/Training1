#include <iostream>
using namespace std;
double power(double n, int p = 2) {
    double result = 1.0;
    for ( int i = 0;i < p; i++)
    result*= n;
    return result;

}
int main(){
    cout << "3 squared " << power(3.0) << endl;
    cout << " 2 cubed " << power(2.0, 3) <<endl;
    return 0; 
}