#include <iostream>
using namespace std;
int main() {
int arr[4] = {10, 20, 30, 40};
int *p = arr; // p points to arr[0]
cout << arr << endl; // address e.g. 0x61fe00
cout << &arr[0] << endl; // SAME address
cout << p << endl; // SAME address
cout << *p << endl; // 10 (arr[0])
cout << *(p+1) << endl; // 20 (arr[1])
cout << arr[2] << endl; // 30 ≡ *(arr+2)
cout << arr[1] << endl; // 20 ≡ *(arr+1)
}