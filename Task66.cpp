#include <iostream>
using namespace std;

template <class T>
T add(T a, T b){
    return a + b;
}
int main(){
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of doubles: " << add(3.5, 2.5) << endl;
    return 0;   
}