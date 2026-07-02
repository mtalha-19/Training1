#include <iostream>
using namespace std;
float circarea(float radius){
    return 3.14*radius*radius;
}
int main(){
    float r;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area: " << circarea(r) << endl;
    return 0;
}